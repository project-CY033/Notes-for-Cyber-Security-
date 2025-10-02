

<think>

This is a comprehensive request about cryptographic and security concepts. I'll create detailed notes on each topic, covering theory, applications, and technical details. Let me organize this systematically.

I should cover:
1. One-Way Functions - mathematical basis, properties, examples
2. Pseudorandom Generators (PRGs) - definition, security properties, applications
3. Hash Functions - cryptographic properties, algorithms, applications
4. Block Ciphers - structure, modes of operation, examples
5. Stream Ciphers - how they work, designs, applications
6. Access Control Methods - models, policies, implementations
7. Message Authentication - MACs, HMACs, security properties
8. Digital Signatures - principles, algorithms, properties

I'll make this thorough and educational, covering theory, practical implementations, and security considerations.

</think>

# **COMPREHENSIVE CRYPTOGRAPHY & SECURITY NOTES**

---

## **1. ONE-WAY FUNCTIONS**

### **Definition & Core Concept**
A one-way function (OWF) is a mathematical function that is easy to compute in one direction but computationally infeasible to invert. Formally, a function f: {0,1}* → {0,1}* is one-way if:

**Properties:**
- **Easy to compute**: Given input x, computing f(x) is efficient (polynomial time)
- **Hard to invert**: Given output y = f(x), finding any x' such that f(x') = y is computationally infeasible
- **Non-injective acceptable**: Multiple inputs can map to same output (collision-resistant variants exist)

### **Mathematical Formalization**
For all probabilistic polynomial-time (PPT) adversaries A, the probability:
```
Pr[f(A(f(x))) = f(x)] < negligible(n)
```
where x is chosen randomly and n is the security parameter.

### **Examples of Candidate One-Way Functions**

**Integer Multiplication (Factoring Problem):**
- Forward: f(p,q) = p × q (easy)
- Inverse: Given n, find p and q (hard for large numbers)
- Example: 77 → easy to multiply, but finding 7 × 11 from 77 is harder with large primes

**Discrete Logarithm:**
- Forward: f(x) = g^x mod p (efficient)
- Inverse: Given y = g^x mod p, find x (computationally hard)
- Used in Diffie-Hellman and ElGamal cryptosystems

**Modular Squaring (Rabin Function):**
- f(x) = x² mod n where n = p × q
- Computing squares is easy; finding square roots without factoring n is hard

### **Theoretical Importance**
- **Foundation of cryptography**: Most cryptographic primitives require OWFs
- **Complexity theory connection**: P ≠ NP would imply OWFs exist
- **Not proven**: No mathematically proven OWF exists (only candidates based on hardness assumptions)

### **Applications**
- Password storage (hash passwords, not plaintext)
- Key derivation functions
- Commitment schemes
- Building blocks for encryption and signatures

---

## **2. PSEUDORANDOM GENERATORS (PRGs)**

### **Definition & Purpose**
A PRG is a deterministic algorithm that takes a short random seed and expands it into a longer pseudorandom sequence that is computationally indistinguishable from truly random bits.

**Formal Definition:**
G: {0,1}^n → {0,1}^m where m > n (expansion factor)

### **Security Properties**

**Computational Indistinguishability:**
For all PPT distinguishers D:
```
|Pr[D(G(s)) = 1] - Pr[D(r) = 1]| < negligible(n)
```
where s is random seed, r is truly random string

**Key Characteristics:**
- **Deterministic**: Same seed always produces same output
- **Expansion**: Output length > input seed length
- **Efficiency**: Must run in polynomial time
- **Unpredictability**: Next-bit unpredictability (given k bits, bit k+1 is unpredictable)

### **Construction Requirements**
1. **Seed space**: Sufficient entropy (typically 128-256 bits)
2. **Expansion ratio**: Often exponential (seed → arbitrarily long output)
3. **Security parameter**: Determines resistance to attacks

### **Types of PRGs**

**Cryptographic PRGs:**
- **Linear Congruential Generator (NOT cryptographically secure)**
  - X_{n+1} = (aX_n + c) mod m
  - Fast but predictable
  
**Cryptographically Secure PRGs:**
- **Blum Blum Shub (BBS)**
  - X_{n+1} = X_n² mod M (where M = p × q, p,q primes)
  - Provably secure if factoring is hard
  - Output: least significant bit of X_n

- **Based on Block Ciphers**
  - Counter mode: E_k(0), E_k(1), E_k(2), ...
  - Used in practice (AES-CTR)

- **Based on Hash Functions**
  - HMAC-DRBG (Deterministic Random Bit Generator)
  - Hash-DRBG

### **Standards & Implementations**
- **NIST SP 800-90A**: Approved DRBG mechanisms
- **ChaCha20**: Modern stream cipher used as PRG
- **/dev/urandom**: Unix PRG combining entropy with PRNG

### **Applications**
- Stream cipher key generation
- Initialization vectors (IVs)
- Nonces and random challenges
- Cryptographic protocol randomness
- Monte Carlo simulations (non-crypto uses)

### **Security Considerations**
- **Seed entropy critical**: Weak seed = predictable output
- **State compromise**: Forward secrecy requires state updates
- **Side-channel attacks**: Timing, power analysis risks
- **Backward secrecy**: Use key erasure and state evolution

---

## **3. HASH FUNCTIONS**

### **Definition & Purpose**
A cryptographic hash function is a deterministic algorithm that maps arbitrary-length input data to a fixed-size output (hash/digest), with specific security properties.

**Mathematical Notation:**
H: {0,1}* → {0,1}^n where n is the digest size

### **Essential Properties**

**1. Pre-image Resistance (One-way):**
- Given hash h, computationally infeasible to find m where H(m) = h
- Provides one-way property

**2. Second Pre-image Resistance (Weak Collision Resistance):**
- Given message m1, infeasible to find m2 ≠ m1 where H(m1) = H(m2)
- Prevents targeted forgery

**3. Collision Resistance (Strong Collision Resistance):**
- Computationally infeasible to find any pair (m1, m2) where m1 ≠ m2 but H(m1) = H(m2)
- Most stringent requirement
- Birthday paradox: requires 2^(n/2) operations to find collision

**4. Deterministic:**
- Same input always produces same output

**5. Fast Computation:**
- Efficient to compute for any input

**6. Avalanche Effect:**
- Small input change causes significant output change (ideally ~50% of bits flip)

### **Common Hash Algorithms**

**MD5 (Message Digest 5):**
- Output: 128 bits
- **Status: BROKEN** - collision attacks exist
- Still used for checksums (non-security)
- Structure: Merkle-Damgård construction

**SHA-1 (Secure Hash Algorithm 1):**
- Output: 160 bits
- **Status: DEPRECATED** - practical collision attacks (2017)
- 80 rounds of processing
- Used in legacy systems

**SHA-2 Family:**
- **SHA-256**: 256-bit output, 64 rounds (most common)
- **SHA-512**: 512-bit output, 80 rounds
- **SHA-224, SHA-384**: Truncated variants
- Status: Currently secure and widely used
- Structure: Merkle-Damgård with Davies-Meyer compression

**SHA-3 (Keccak):**
- Output: Variable (SHA3-224, 256, 384, 512)
- Structure: Sponge construction (different from SHA-2)
- Status: Latest NIST standard (2015)
- More resistant to length-extension attacks
- Provides SHAKE128/256 (extendable output functions)

**BLAKE2/BLAKE3:**
- Faster than SHA-2/SHA-3
- BLAKE2b: optimized for 64-bit, up to 512 bits
- BLAKE3: parallelizable, very fast
- Used in modern applications

### **Construction Methods**

**Merkle-Damgård Construction:**
```
Message → Padding → Blocks (M1, M2, ..., Mn)
H0 = IV
Hi = Compress(Hi-1, Mi)
Final hash = Hn
```
- Issues: Length-extension attacks
- MD5, SHA-1, SHA-2 use this

**Sponge Construction (SHA-3):**
```
Absorbing phase: XOR input blocks into state
Squeezing phase: Extract output bits
```
- Rate (r) + Capacity (c) = State size
- More flexible, no length-extension vulnerability

### **Applications**

**Data Integrity:**
- File verification (checksums)
- Software downloads (hash verification)
- Blockchain (Bitcoin uses double SHA-256)

**Password Storage:**
- Hash passwords with salt
- Use slow hashes: bcrypt, scrypt, Argon2
- Never store plaintext passwords

**Digital Signatures:**
- Hash message before signing (efficiency)
- Sign H(M) instead of M

**Message Authentication Codes:**
- HMAC construction
- Proof of data origin and integrity

**Commitment Schemes:**
- Commit to value without revealing
- C = H(message || random)

**Proof of Work:**
- Mining in cryptocurrencies
- Find nonce such that H(block || nonce) < target

**Key Derivation:**
- PBKDF2, HKDF
- Derive multiple keys from master secret

### **Attack Models**

**Birthday Attack:**
- Exploits birthday paradox
- Find collision with ~2^(n/2) hash evaluations
- Reason 256-bit hashes provide ~128-bit security

**Length-Extension Attack:**
- Applies to Merkle-Damgård hashes
- Given H(M), attacker can compute H(M||M') without knowing M
- Mitigation: HMAC or SHA-3

**Rainbow Tables:**
- Pre-computed hash tables for password cracking
- Defense: Use salts (unique per password)

### **Security Considerations**
- Minimum digest size: 256 bits (128-bit security)
- Use SHA-256 or SHA-3 for new applications
- For passwords: Use dedicated functions (Argon2, bcrypt, scrypt)
- Always use salt for password hashing
- Consider truncation attacks in protocol design

---

## **4. BLOCK CIPHERS**

### **Definition & Core Concept**
A block cipher is a deterministic algorithm that encrypts fixed-size blocks of plaintext into ciphertext blocks using a symmetric key. It's a permutation family indexed by the key.

**Formal Definition:**
E: {0,1}^k × {0,1}^n → {0,1}^n
- k = key length
- n = block size
- E_K(P) = C (encryption)
- D_K(C) = P (decryption)

### **Design Principles**

**Confusion:**
- Complex relationship between key and ciphertext
- Each ciphertext bit depends on multiple key bits
- Implemented via substitution

**Diffusion:**
- Spread influence of plaintext bits across ciphertext
- Change one bit → affects many output bits
- Implemented via permutation/transposition

**Avalanche Effect:**
- One bit change in input → ~50% output bits change
- Critical for security

### **Structure Types**

**Substitution-Permutation Network (SPN):**
```
Round structure:
1. Key mixing (XOR with round key)
2. Substitution (S-boxes)
3. Permutation (P-boxes)
4. Repeat for multiple rounds
```
- Example: AES
- Parallelizable

**Feistel Network:**
```
Round structure:
Split block into L0, R0
Li = Ri-1
Ri = Li-1 ⊕ F(Ri-1, Ki)
Output: Rn || Ln
```
- Example: DES, Blowfish, Twofish
- Encryption = Decryption structure (different key schedule)
- Simpler implementation

### **Major Block Cipher Algorithms**

**DES (Data Encryption Standard):**
- Block size: 64 bits
- Key size: 56 bits (64 with parity)
- Rounds: 16 Feistel rounds
- **Status: OBSOLETE** - vulnerable to brute force
- S-boxes designed with classified criteria
- Historical importance: First civilian crypto standard (1977)

**3DES (Triple DES):**
- Applies DES three times
- EDE mode: E(K1, D(K2, E(K3, P)))
- Effective key length: 112 or 168 bits
- Block size: still 64 bits (weakness)
- **Status: DEPRECATED** - slow, small blocks
- Phase-out by 2023-2024 (NIST)

**AES (Advanced Encryption Standard):**
- **Most widely used symmetric cipher**
- Block size: 128 bits
- Key sizes: 128, 192, 256 bits
- Rounds: 10, 12, 14 (depending on key size)

**AES Round Structure:**
```
1. SubBytes: Non-linear S-box substitution
2. ShiftRows: Cyclically shift rows
3. MixColumns: Matrix multiplication in GF(2^8)
4. AddRoundKey: XOR with round key
```

**AES Properties:**
- Designed for hardware efficiency
- No known practical attacks on full AES
- Related-key attacks exist (theoretical)
- Side-channel resistance requires careful implementation

**Other Notable Ciphers:**

**Blowfish:**
- Variable key length: 32-448 bits
- Block size: 64 bits
- 16 Feistel rounds
- Fast, unpatented

**Twofish:**
- AES finalist
- Block: 128 bits, Key: 128/192/256 bits
- 16 Feistel rounds
- Pre-whitening and post-whitening

**ChaCha20:**
- Technically a stream cipher
- Used in TLS, SSH
- Very fast in software
- Immune to timing attacks

### **Modes of Operation**

Block ciphers only encrypt one block. Modes define how to encrypt longer messages.

**Electronic Codebook (ECB):**
```
Ci = E_K(Pi)
```
- **Security: TERRIBLE** - never use for actual encryption
- Identical plaintext blocks → identical ciphertext blocks
- No diffusion across blocks
- Patterns visible (penguin image example)
- Use: Only for single block or key encryption

**Cipher Block Chaining (CBC):**
```
C0 = IV (Initialization Vector)
Ci = E_K(Pi ⊕ Ci-1)
Pi = D_K(Ci) ⊕ Ci-1
```
- Sequential encryption (can't parallelize encryption)
- Parallel decryption possible
- Requires random, unique IV
- Padding oracle attacks possible if not handled correctly
- Error propagation: One corrupted block affects two plaintext blocks

**Counter Mode (CTR):**
```
Ci = Pi ⊕ E_K(Counter + i)
```
- Turns block cipher into stream cipher
- Fully parallelizable (encryption and decryption)
- Random access (can decrypt any block independently)
- No padding needed
- Requires unique counter/nonce
- Same keystream reuse = catastrophic

**Galois/Counter Mode (GCM):**
```
Encryption: CTR mode
Authentication: GHASH (Galois field multiplication)
Output: Ciphertext + Authentication Tag
```
- Authenticated encryption with associated data (AEAD)
- Most widely used in modern protocols (TLS 1.3)
- Parallel, efficient
- Single-pass
- Nonce reuse = authentication catastrophe

**Other Important Modes:**

**Output Feedback (OFB):**
- Stream cipher mode
- Oi = E_K(Oi-1), O0 = IV
- Ci = Pi ⊕ Oi

**Cipher Feedback (CFB):**
- Self-synchronizing stream cipher
- Ci = Pi ⊕ E_K(Ci-1)

**XTS (XEX-based Tweaked CodeBook):**
- For disk encryption
- Each sector has tweak
- Used in BitLocker, FileVault

### **Padding Schemes**

**PKCS#7 Padding:**
```
If 3 bytes needed: ...03 03 03
If full block needed: ...10 10 10 ... 10 (16 bytes of 0x10)
```
- Most common
- Padding oracle attacks possible

**ISO/IEC 7816-4:**
- Append 0x80 followed by 0x00 bytes

**Zero Padding:**
- Ambiguous (can't distinguish padding from data)
- Avoid

### **Security Considerations**

**Key Management:**
- Use strong random key generation
- Never reuse keys across modes
- Rotate keys periodically

**IV/Nonce Requirements:**
- CBC: Random, unpredictable IV
- CTR/GCM: Unique nonce (never reuse with same key)
- Size matters: 96-bit nonce for GCM

**Known Attacks:**
- Padding oracle attacks (CBC without MAC)
- Nonce reuse (CTR, GCM)
- Related-key attacks (mostly theoretical)
- Side-channel attacks (timing, power, cache)

**Best Practices:**
- Use AES-256-GCM for new applications
- Always authenticate ciphertext (use AEAD or MAC)
- Implement constant-time operations
- Use hardware AES-NI when available

---

## **5. STREAM CIPHERS**

### **Definition & Concept**
Stream ciphers encrypt data bit-by-bit or byte-by-byte using a pseudorandom keystream generated from a key and nonce. They're designed for speed and simplicity.

**Basic Operation:**
```
Keystream: K = PRG(key, nonce)
Encryption: C = P ⊕ K
Decryption: P = C ⊕ K
```

### **Key Characteristics**

**Advantages:**
- Very fast (especially in hardware)
- Low memory requirements
- No padding needed
- Suitable for streaming data
- Can process variable-length messages

**Disadvantages:**
- Keystream reuse catastrophic: C1 ⊕ C2 = P1 ⊕ P2
- No error propagation (bit flip persists)
- Synchronization critical
- No built-in authentication

### **Types of Stream Ciphers**

**Synchronous Stream Ciphers:**
- Keystream independent of plaintext/ciphertext
- Sender and receiver must maintain sync
- Lost/inserted bit = total desynchronization
- Example: RC4, ChaCha20

**Self-Synchronizing Stream Ciphers:**
- Keystream depends on previous ciphertext bits
- Automatically resync after error
- Limited error propagation
- Less common in modern crypto
- Example: CFB mode (block cipher as stream cipher)

### **Major Stream Cipher Designs**

**RC4 (Rivest Cipher 4):**
```
Structure:
- 256-byte state array
- Two counters (i, j)
- Key scheduling algorithm (KSA)
- Pseudo-random generation algorithm (PRGA)
```
- **Status: BROKEN** - multiple biases discovered
- Forbidden in TLS 1.3
- Key reuse attacks
- Weak key biases in initial bytes
- Historical use: WEP, early TLS

**ChaCha20:**
```
Structure:
- 512-bit state (16 words of 32 bits)
- Quarter-round function (ARX: Add-Rotate-XOR)
- 20 rounds (10 column, 10 diagonal)
- 256-bit key, 96-bit nonce, 32-bit counter
```
- **Modern standard** - used in TLS, SSH, VPNs
- Created by Daniel Bernstein
- No timing attacks (constant-time)
- Better software performance than AES-CTR
- ChaCha20-Poly1305: AEAD variant

**Salsa20:**
- Predecessor to ChaCha20
- Similar ARX structure
- 64-bit nonce (smaller than ChaCha20)
- Used in NaCl cryptographic library

**Hardware-Oriented Ciphers:**

**A5/1 (GSM):**
- Linear Feedback Shift Registers (LFSRs)
- **Status: BROKEN** - practical attacks exist
- 64-bit key
- Used in 2G cellular encryption

**A5/3 (KASUMI):**
- Block cipher in OFB mode
- Improved security over A5/1
- Used in 3G networks

**ZUC:**
- Chinese standard for 4G/5G
- 128/256-bit versions
- LFSR-based with non-linear function

### **Linear Feedback Shift Registers (LFSRs)**

**Basic LFSR:**
```
State: [s0, s1, ..., sn-1]
Feedback: sn = c0·s0 ⊕ c1·s1 ⊕ ... ⊕ cn-1·sn-1
Output: Least significant bit
Shift: Move all bits right, insert feedback
```

**Properties:**
- Maximum period: 2^n - 1 (primitive polynomial)
- Very efficient in hardware
- Linear → vulnerable to known-plaintext attacks
- Used in combinations with non-linear components

**Non-linear Combination:**
- Multiple LFSRs combined through non-linear function
- Increases security
- Example: Trivium cipher

### **Modern Stream Cipher Design**

**eSTREAM Project Winners:**

**HC-128:**
- 128-bit key and IV
- Two secret tables (512 × 32 bits each)
- Very fast in software

**Rabbit:**
- 128-bit key
- Counter-driven
- Eight coupled non-linear state variables
- Very high speed

**Grain:**
- Hardware-efficient
- LFSR + NFSR (non-linear FSR)
- Suitable for constrained environments

**Trivium:**
- Hardware-optimized
- Three LFSRs (93, 84, 111 bits)
- 80-bit key and IV
- Simple, efficient

### **One-Time Pad (Perfect Security)**

**Vernam Cipher:**
```
K = truly random key, |K| = |P|
C = P ⊕ K
```
- **Perfect secrecy** (Shannon's theorem)
- Key must be:
  - Truly random
  - Same length as message
  - Used only once
  - Kept perfectly secret

**Practical Issues:**
- Key distribution problem
- Key length impractical for large data
- Key generation difficulty
- Only theoretical/special use (diplomatic channels)

### **Security Considerations**

**Critical Rules:**

1. **Never Reuse Keystream:**
```
C1 = P1 ⊕ K
C2 = P2 ⊕ K
C1 ⊕ C2 = P1 ⊕ P2 (key cancels out!)
```
- Two-time pad attack
- Can recover plaintexts

2. **Use Unique Nonce:**
- Nonce must never repeat with same key
- Typically: counter, random value, or timestamp

3. **Authenticate Ciphertext:**
- Stream ciphers don't provide integrity
- Bit flipping attacks: Flip bit in C → flips same bit in P
- Use MAC or AEAD (ChaCha20-Poly1305)

**Attack Models:**

**Known-Plaintext Attacks:**
- If P and C known → recover K
- Then decrypt other messages with same K

**Bit-Flipping Attack:**
```
C' = C ⊕ Δ
P' = P ⊕ Δ
```
- Attacker can selectively modify plaintext bits

**Distinguishing Attacks:**
- Statistical tests on keystream
- RC4 biases exploited this way

### **Implementation Considerations**
- Use ChaCha20 for software implementations
- Use hardware AES-CTR if AES-NI available
- Always combine with authentication (Poly1305, GHASH)
- Implement nonce/counter management carefully
- Consider constant-time implementations

---

## **6. ACCESS CONTROL METHODS**

### **Definition & Purpose**
Access control is the selective restriction of access to resources based on the identity, role, or attributes of users and the resources they want to access.

### **Fundamental Concepts**

**Security Principles:**
- **Least Privilege**: Grant minimum necessary access
- **Separation of Duties**: Split critical operations among multiple users
- **Defense in Depth**: Multiple layers of control
- **Complete Mediation**: Check every access attempt
- **Fail-Safe Defaults**: Default deny unless explicitly permitted

**Access Control Components:**
1. **Subjects**: Active entities (users, processes, systems)
2. **Objects**: Passive entities (files, databases, devices)
3. **Access Rights**: Permissions (read, write, execute, delete)
4. **Authorization Policy**: Rules defining allowed access

### **Access Control Models**

**1. Discretionary Access Control (DAC)**

**Concept:**
- Resource owner controls access permissions
- Users can grant/revoke access to their resources
- Flexible but potentially insecure

**Characteristics:**
- Identity-based access control
- Access Control Lists (ACLs) or Capability lists
- Delegation possible
- Used in most operating systems (Unix, Windows)

**Unix/Linux DAC Example:**
```
-rwxr-xr-- 1 user group 4096 Jan 1 file.txt
Owner: rwx (read, write, execute)
Group: r-x (read, execute)
Others: r-- (read only)
```

**Implementation:**
- **Access Control Lists (ACLs)**: List of (subject, rights) for each object
- **Capability Lists**: List of (object, rights) for each subject
- **Access Control Matrix**: 2D matrix [subjects × objects]

**Weaknesses:**
- Information flow not controlled (Trojan horse problem)
- User can accidentally/maliciously leak data
- Difficult to enforce organizational policies
- Vulnerable to confused deputy problem

**2. Mandatory Access Control (MAC)**

**Concept:**
- System-enforced access control
- Based on security classifications
- Users cannot override policies
- Strong information flow control

**Security Levels (Bell-LaPadula Model):**
```
Top Secret > Secret > Confidential > Unclassified
```

**Bell-LaPadula Properties (Confidentiality):**
- **Simple Security Property** (No Read Up): Subject at level L cannot read objects at level > L
- **\*-Property** (No Write Down): Subject at level L cannot write to objects at level < L
- **Prevents information leakage** from high to low

**Example:**
- Secret clearance user can read Confidential files
- Secret clearance user cannot read Top Secret files
- Secret clearance user cannot write to Confidential files (would leak info)

**Biba Model (Integrity):**
- Dual to Bell-LaPadula
- **Simple Integrity Property** (No Read Down): Don't read lower integrity data
- **Integrity \*-Property** (No Write Up): Don't write to higher integrity objects
- **Prevents contamination** of high integrity data

**Clark-Wilson Model:**
- Commercial integrity model
- Well-formed transactions
- Separation of duties
- Audit logs
- Focuses on preventing unauthorized data modification

**Implementation:**
- **SELinux**: Linux with MAC
- **TrustedBSD**: MAC framework for BSD
- **Military systems**: Classified information handling

**3. Role-Based Access Control (RBAC)**

**Concept:**
- Permissions assigned to roles
- Users assigned to roles
- Simplified administration

**RBAC Components:**
```
Users ← UA (User Assignment) → Roles ← PA (Permission Assignment) → Permissions
```

**Core RBAC Elements:**
1. **Users**: Individual identities
2. **Roles**: Job functions (Manager, Engineer, Clerk)
3. **Permissions**: Access to operations on objects
4. **Sessions**: User activates subset of roles

**RBAC Levels:**

**Flat RBAC:**
- Users, roles, permissions
- User-role and role-permission assignments
- Sessions

**Hierarchical RBAC:**
- Role hierarchy (inheritance)
- Senior roles inherit junior role permissions
- Example: Director > Manager > Employee

**Constrained RBAC:**
- Separation of Duty (SoD) constraints
- Mutually exclusive roles
- Cardinality constraints (max N users per role)

**Symmetric RBAC:**
- Adds role-permission review
- Full flexibility

**Example Role Hierarchy:**
```
           CEO
            |
        CIO   CFO
         |     |
    IT-Manager  Accountant
         |
    IT-Staff
```

**Advantages:**
- Easier administration (manage roles, not individual permissions)
- Reflects organizational structure
- Principle of least privilege enforcement
- Simplified auditing

**Disadvantages:**
- Role explosion (too many specific roles)
- Difficult to handle exceptions
- Initial setup complex
- Role definition requires business understanding

**4. Attribute-Based Access Control (ABAC)**

**Concept:**
- Access based on attributes of subjects, objects, environment
- Policy-driven, fine-grained
- Most flexible and expressive

**Attribute Types:**
1. **Subject attributes**: User ID, role, clearance, department, age
2. **Object attributes**: Type, classification, owner, creation date
3. **Environment attributes**: Time, location, threat level, device type
4. **Action attributes**: Read, write, delete, approve

**Policy Language (XACML-style):**
```
IF (subject.role = "Doctor" AND 
    object.type = "MedicalRecord" AND
    subject.department = object.department AND
    time.hour >= 8 AND time.hour <= 18)
THEN PERMIT read
```

**ABAC Architecture:**
1. **PEP** (Policy Enforcement Point): Intercepts access requests
2. **PDP** (Policy Decision Point): Evaluates policies, makes decisions
3. **PIP** (Policy Information Point): Provides attribute values
4. **PAP** (Policy Administration Point): Manages policies

**Advantages:**
- Extremely flexible
- Dynamic access decisions
- Context-aware (time, location, device)
- Scales better than RBAC for complex scenarios
- Fine-grained control

**Disadvantages:**
- Complex policy management
- Performance overhead (policy evaluation)
- Difficult to debug
- Attribute management challenge

**Standards:**
- **XACML** (eXtensible Access Control Markup Language)
- **NGAC** (Next Generation Access Control)

### **Access Control Lists (ACLs) vs Capabilities**

**Access Control Lists:**
- Stored with object
- Lists who can access object and how
- Revocation easy (remove entry)
- Difficult to enumerate user's permissions

**Example (File ACL):**
```
File: report.pdf
- Alice: Read, Write
- Bob: Read
- HR-Group: Read
```

**Capabilities:**
- Stored with subject
- Tokens granting access rights
- Delegation easy (pass capability)
- Revocation difficult

**Example (User Capability):**
```
Alice's capabilities:
- Capability-1: Read /file1
- Capability-2: Write /file2
- Capability-3: Execute /app
```

### **Advanced Access Control Mechanisms**

**Multilevel Security (MLS):**
- Multiple security levels in single system
- Prevents both disclosure and modification
- Used in military, intelligence

**Chinese Wall Model:**
- Prevents conflicts of interest
- Once access granted to Company A data
- Access denied to competing Company B data
- Used in consulting, financial services

**Originator Controlled (ORCON):**
- Data originator controls access
- Even after dissemination
- Used in intelligence sharing

**Context-Aware Access Control:**
- Risk-based authentication
- Adaptive access based on:
  - Device posture
  - Network location
  - User behavior anomalies
  - Threat intelligence

### **Modern Access Control Technologies**

**Identity and Access Management (IAM):**
- Centralized identity management
- Single Sign-On (SSO)
- Multi-Factor Authentication (MFA)
- Lifecycle management

**Zero Trust Architecture:**
- "Never trust, always verify"
- Micro-segmentation
- Continuous authentication
- Least privilege access
- Explicit verification

**OAuth 2.0 / OpenID Connect:**
- Delegated authorization
- API access control
- Token-based
- Used in web/mobile apps

**Policy-Based Access Control:**
- Centralized policy engine
- Automated enforcement
- Continuous compliance monitoring

### **Implementation Considerations**

**Security Best Practices:**
1. Default deny policy
2. Principle of least privilege
3. Separation of duties
4. Regular access reviews
5. Audit logging
6. Strong authentication
7. Privilege escalation prevention

**Common Vulnerabilities:**
- Privilege escalation (vertical/horizontal)
- Confused deputy problem
- Time-of-check-time-of-use (TOCTOU)
- Access control bypass
- Insecure direct object references
- Missing function-level access control

---

## **7. MESSAGE AUTHENTICATION**

### **Definition & Purpose**
Message authentication ensures that messages have not been altered in transit and verifies the identity of the sender. It provides integrity and authenticity but not confidentiality.

### **Security Goals**

**Integrity:**
- Message hasn't been modified
- Detection of insertion, deletion, substitution

**Authentication:**
- Verification of message origin
- Non-repudiation (with digital signatures)
- Protection against impersonation

**Freshness:**
- Protection against replay attacks
- Timeliness verification

### **Message Authentication Code (MAC)**

**Definition:**
A MAC is a short piece of information used to authenticate a message, confirming both data integrity and authenticity.

**Mathematical Definition:**
```
Tag = MAC(Key, Message)
Verify(Key, Message, Tag) → {Accept, Reject}
```

**Properties:**
1. **Deterministic**: Same key+message → same tag
2. **Keyed**: Requires secret key
3. **Fixed size**: Tag length independent of message length
4. **Efficient**: Fast to compute and verify
5. **Unpredictable**: Cannot forge without key

**Security Requirements:**
- **Existential unforgeability**: Attacker cannot create valid (message, tag) pair
- **Chosen-message security**: Even if attacker obtains many valid (message, tag) pairs
- **Collision resistance**: Hard to find M1 ≠ M2 with MAC(K,M1) = MAC(K,M2)

### **MAC Construction Methods**

**1. HMAC (Hash-based MAC)**

**Construction:**
```
HMAC(K, M) = H((K ⊕ opad) || H((K ⊕ ipad) || M))

Where:
- H = cryptographic hash function (e.g., SHA-256)
- K = secret key (padded to block size)
- ipad = 0x36 repeated (inner padding)
- opad = 0x5C repeated (outer padding)
- || = concatenation
```

**Why Two Hash Applications?**
- Protection against length-extension attacks
- Prevents H(K || M) vulnerabilities
- Provably secure (based on hash function properties)

**Common Variants:**
- **HMAC-SHA256**: 256-bit output, most common
- **HMAC-SHA512**: 512-bit output, higher security
- **HMAC-SHA1**: 160-bit output, legacy (still acceptable for MACs)
- **HMAC-MD5**: Deprecated for most uses

**Security:**
- Secure even if underlying hash has collision problems
- Key size should match hash output size
- Truncation allowed (e.g., HMAC-SHA256-128)

**Advantages:**
- Well-studied and proven security
- Fast in software
- Uses existing hash functions
- No patents

**Usage:**
- TLS/SSL protocols
- IPsec
- SSH
- API authentication (AWS, etc.)

**2. CMAC (Cipher-based MAC)**

**Construction:**
```
Uses block cipher (AES) in CBC mode
Final block: special processing with subkeys
Output: Last encrypted block (or truncated)
```

**OMAC/CMAC Process:**
1. Pad message to block size
2. CBC encryption with zero IV
3. Apply subkey to last block
4. Output final ciphertext block

**Properties:**
- Security based on block cipher (AES)
- Fixed-length output (block size)
- Provably secure
- Used in NIST standards

**Advantages:**
- Efficient if hardware AES available (AES-NI)
- Single primitive (cipher for encryption and MAC)
- Better performance than HMAC on some platforms

**Disadvantages:**
- More complex than HMAC
- Requires block cipher implementation

**3. Poly1305**

**Construction:**
- **Type**: One-time MAC
- **Based on**: Polynomial evaluation in finite field
- **Key**: 256 bits (128-bit r, 128-bit s)
- **Tag**: 128 bits

**Algorithm:**
```
r = clamp(key[0..15])
s = key[16..31]
Tag = ((m1·r^n + m2·r^(n-1) + ... + mn·r) mod p) + s

Where p = 2^130 - 5
```

**Properties:**
- Extremely fast (parallelizable)
- One-time authenticator (key must be unique per message)
- Used with stream ciphers
- Information-theoretically secure against forgery

**Usage:**
- ChaCha20-Poly1305 (AEAD)
- Google/Cloudflare TLS implementations

**4. CBC-MAC**

**Basic Construction:**
```
C0 = IV = 0
Ci = E_K(Mi ⊕ Ci-1)
Tag = Cn (last ciphertext block)
```

**Security Issues:**
- **Length extension**: Given MAC(M), can compute MAC(M || M')
- **Prefix vulnerability**: MAC(M1) = MAC(M1 || M2) if M2 chosen right

**ECBC-MAC (Encrypted CBC-MAC):**
```
Tag = E_K2(CBC-MAC_K1(M))
Uses two keys, prevents extension
```

**XCBC-MAC:**
- Variant with three keys
- Handles variable-length messages securely

**Status:**
- Basic CBC-MAC: Avoid (vulnerable)
- CMAC/OMAC: Use instead (modern, secure)

### **Authenticated Encryption (AE & AEAD)**

**Purpose:**
- Combines confidentiality and authenticity
- Single operation for both encryption and authentication
- More efficient and secure than separate operations

**AEAD (Authenticated Encryption with Associated Data):**
- Encrypts confidential data
- Authenticates both ciphertext and additional associated data (AAD)
- AAD: Metadata that needs integrity but not confidentiality (e.g., headers)

**Common AEAD Schemes:**

**1. GCM (Galois/Counter Mode):**
```
Encryption: CTR mode with AES
Authentication: GHASH (Galois field multiplication)
Tag: 128 bits (typically)
```
- Most widely used AEAD
- TLS 1.3 default
- Hardware acceleration available
- Parallel processing
- Nonce reuse = catastrophic

**2. ChaCha20-Poly1305:**
```
Encryption: ChaCha20 stream cipher
Authentication: Poly1305 MAC
```
- Modern alternative to AES-GCM
- Better software performance
- No timing attacks
- Used in TLS, SSH, WireGuard

**3. CCM (Counter with CBC-MAC):**
```
Authentication: CBC-MAC
Encryption: CTR mode
```
- Used in WPA2, Bluetooth, TLS
- Two-pass (slower than GCM)
- More conservative design

**4. EAX:**
- Three-pass authenticated encryption
- Based on OMAC and CTR
- Provably secure
- Less common in practice

**5. OCB (Offset Codebook):**
- Single-pass AEAD
- Very efficient
- Patent encumbered (free for open-source)

### **MAC Security Analysis**

**Attack Models:**

**Forgery Attacks:**
- **Existential forgery**: Create any valid (message, tag)
- **Selective forgery**: Create valid tag for specific message
- **Universal forgery**: Recover key or create tags for any message

**Birthday Attacks:**
- Collect 2^(n/2) message-tag pairs
- Find internal collision
- Tag length should be ≥ 128 bits

**Length Extension:**
- Applies to naive constructions: MAC = H(K || M)
- Given MAC(M), attacker computes MAC(M || M')
- Prevented by HMAC construction

**Timing Attacks:**
- Constant-time comparison critical
- Use: `constant_time_compare(tag1, tag2)`
- Never: `tag1 == tag2` (leaks information)

**Replay Attacks:**
- MAC alone doesn't prevent replay
- Solutions:
  - Sequence numbers
  - Timestamps
  - Nonces
  - Challenge-response

### **Implementation Best Practices**

**Key Management:**
1. Use strong random keys (min 128 bits)
2. Separate keys for encryption and authentication
3. Derive keys using KDF (HKDF)
4. Rotate keys periodically
5. Never reuse keys across different algorithms

**Tag Length:**
- Minimum: 128 bits (64-bit security against forgery)
- Recommended: 256 bits for high security
- Truncation: Acceptable with margin (e.g., HMAC-SHA256 → 128 bits)

**Verification:**
- Always verify MAC before decryption
- Use constant-time comparison
- Reject immediately on failure

**Encrypt-then-MAC vs MAC-then-Encrypt:**
- **Encrypt-then-MAC**: MAC(Encrypt(P)) ← **RECOMMENDED**
  - Verify authenticity before decryption
  - Prevents padding oracle attacks
  - TLS 1.3 approach

- **MAC-then-Encrypt**: Encrypt(P || MAC(P)) ← Vulnerable
  - Used in TLS 1.2 (caused problems)
  - Padding oracle attacks (Lucky13)

- **Encrypt-and-MAC**: Encrypt(P) || MAC(P) ← Problematic
  - MAC might leak plaintext information
  - SSH does this (requires care)

**Recommendation:** Use AEAD (GCM, ChaCha20-Poly1305) instead of combining primitives manually.

### **Standards and Protocols**

**NIST Standards:**
- FIPS 198-1: HMAC
- SP 800-38D: GCM
- SP 800-38C: CCM
- SP 800-38B: CMAC

**Usage in Protocols:**
- **TLS 1.3**: AEAD only (GCM, ChaCha20-Poly1305)
- **TLS 1.2**: HMAC or AEAD
- **IPsec**: HMAC-SHA256, AES-GCM
- **SSH**: Various (HMAC, Encrypt-and-MAC)
- **JWT**: HMAC-SHA256 for symmetric JWTs

---

## **8. DIGITAL SIGNATURES**

### **Definition & Purpose**
A digital signature is a mathematical scheme that provides authenticity, integrity, and non-repudiation for digital messages or documents. It's the cryptographic equivalent of a handwritten signature.

### **Security Properties**

**Authentication:**
- Verifies sender's identity
- Binds signature to specific entity

**Integrity:**
- Detects any message modification
- Ensures message hasn't been altered

**Non-repudiation:**
- Signer cannot deny having signed
- Provides proof of origin (legal evidence)
- Requires asymmetric cryptography

**Unforgeability:**
- Only holder of private key can create valid signature
- Computationally infeasible to forge

### **Digital Signature vs MAC**

| Property | Digital Signature | MAC |
|----------|------------------|-----|
| Keys | Asymmetric (public/private) | Symmetric (shared key) |
| Non-repudiation | Yes | No |
| Verification | Anyone with public key | Only key holders |
| Performance | Slower (public-key ops) | Faster (symmetric ops) |
| Use case | Legal, public verification | Fast authentication |

### **Signature Scheme Components**

**Three Algorithms:**

1. **Key Generation**: Gen() → (sk, pk)
   - sk = signing key (private)
   - pk = verification key (public)

2. **Signing**: Sign(sk, M) → σ
   - Input: private key, message
   - Output: signature

3. **Verification**: Verify(pk, M, σ) → {Valid, Invalid}
   - Input: public key, message, signature
   - Output: acceptance decision

### **Common Signature Algorithms**

**1. RSA Signatures**

**Key Generation:**
```
1. Choose large primes p, q
2. Compute n = p × q
3. Choose e (public exponent, typically 65537)
4. Compute d = e^(-1) mod φ(n)
5. Public key: (n, e)
6. Private key: (n, d)
```

**Basic RSA Signature (Textbook - INSECURE):**
```
Sign: σ = M^d mod n
Verify: M' = σ^e mod n, check M' = M
```

**Problems with Textbook RSA:**
- Existential forgery: Choose σ randomly, compute M = σ^e mod n
- No-message attack possible
- Must hash message first

**RSA-PSS (Probabilistic Signature Scheme):**
```
Sign:
1. M' = H(M)
2. Apply PSS padding with salt
3. σ = (padded_message)^d mod n

Verify:
1. Compute M' = σ^e mod n
2. Verify PSS padding structure
3. Extract hash, verify against H(M)
```

**Properties:**
- **Provably secure** (in random oracle model)
- Salt adds randomness
- Different signature each time
- NIST recommended

**RSA-PKCS#1 v1.5:**
```
Sign: σ = (0x00 || 0x01 || 0xFF...FF || 0x00 || DigestInfo)^d mod n
```
- Legacy standard
- Deterministic
- Used in TLS 1.2, X.509 certificates
- Vulnerable to Bleichenbacher attacks in some contexts

**RSA Key Sizes:**
- 1024 bits: **DEPRECATED** (broken by nation-states)
- 2048 bits: Minimum for current use
- 3072 bits: Recommended for high security
- 4096 bits: Maximum common use
- Performance: Signing slow, verification fast (small e)

**2. DSA (Digital Signature Algorithm)**

**Domain Parameters:**
```
p: large prime (2048-3072 bits)
q: prime divisor of (p-1), 256 bits
g: generator of order q
```

**Key Generation:**
```
Private key: x ← random from [1, q-1]
Public key: y = g^x mod p
```

**Signing:**
```
1. Choose random k from [1, q-1]
2. r = (g^k mod p) mod q
3. s = k^(-1) · (H(M) + x·r) mod q
4. Signature: (r, s)
```

**Verification:**
```
1. w = s^(-1) mod q
2. u1 = H(M) · w mod q
3. u2 = r · w mod q
4. v = ((g^u1 · y^u2) mod p) mod q
5. Accept if v = r
```

**Critical Requirements:**
- **k must be random and unique per signature**
- k reuse or weak k → private key recovery
- PlayStation 3 hack: Sony reused k values

**ECDSA (Elliptic Curve DSA):**
- Same algorithm structure as DSA
- Uses elliptic curves instead of modular arithmetic
- Much smaller keys for same security
- Example: 256-bit ECDSA ≈ 3072-bit RSA

**3. EdDSA (Edwards-curve Digital Signature Algorithm)**

**Ed25519 (most common):**
```
Curve: Curve25519 (Edwards form)
Key size: 256 bits
Signature size: 512 bits (64 bytes)
```

**Properties:**
- **Deterministic**: No random k (derived from message+key)
- **Fast**: Faster than RSA, competitive with ECDSA
- **Small keys and signatures**
- **No timing side-channels** (constant-time operations)
- **Simple implementation** (fewer ways to get wrong)

**Signing:**
```
1. r = H(nonce || M) (deterministic)
2. R = r·G (point on curve)
3. k = H(R || A || M)
4. S = r + k·a mod L
5. Signature: (R, S)
```

**Advantages over ECDSA:**
- No random number generation needed
- Immune to weak RNG
- Faster
- Collision resilience
- Used in: SSH keys, cryptocurrencies, Signal protocol

**Ed448:**
- 448-bit curve
- Higher security margin
- Slightly slower

**4. Schnorr Signatures**

**Basic Schnorr:**
```
Setup: Group G with generator g, prime order q

Sign:
1. r ← random
2. R = g^r
3. e = H(R || M)
4. s = r + e·x mod q
5. Signature: (R, s) or (s, e)

Verify:
1. R' = g^s · y^(-e)
2. e' = H(R' || M)
3. Check e' = e
```

**Properties:**
- Provably secure (in ROM)
- Linear (enables multi-signatures)
- Simple and elegant
- Patent expired (2008)

**Applications:**
- Bitcoin (Taproot upgrade uses Schnorr)
- Multi-signatures (MuSig)
- Threshold signatures

### **Hash-Then-Sign Paradigm**

**Standard Practice:**
```
Signature = Sign(sk, H(M))
```
Rather than signing message directly.

**Reasons:**
- **Efficiency**: Signing long messages slow
- **Security**: Hash provides collision resistance
- **Standardization**: Fixed-size input

**Hash Functions Used:**
- SHA-256: Most common
- SHA-512: For higher security
- SHA-3: Modern alternative
- NEVER MD5 or SHA-1 for new signatures

### **Signature Security**

**Attack Models:**

**Key-Only Attack:**
- Attacker has only public key
- Tries to forge signature

**Known-Message Attack:**
- Attacker sees valid (message, signature) pairs
- Tries to forge for new message

**Chosen-Message Attack:**
- Attacker can request signatures for chosen messages
- Strongest model (CMA)

**Security Notion:**
- **EUF-CMA**: Existential Unforgeability under Chosen Message Attack
- Even with polynomially many signatures, cannot forge new valid signature

**Common Vulnerabilities:**

**Weak Random Number Generation:**
- DSA/ECDSA: Weak or reused k → key recovery
- Example: Sony PS3, Android Bitcoin wallets

**Fault Attacks:**
- Induce computation errors
- Extract key from faulty signature
- Requires physical access or side-channel

**Malleability:**
- Attacker modifies valid signature to create another valid signature
- ECDSA vulnerable (Bitcoin signature malleability)
- EdDSA resistant

**Length Extension Attacks:**
- If H vulnerable, signing construction matters
- Use secure hash (SHA-256, SHA-3)

### **Blind Signatures**

**Concept:**
- User blinds message before signing
- Signer signs without knowing message content
- User unblinds to get signature on original message

**RSA Blind Signature:**
```
1. User: M' = M · r^e mod n (blind)
2. Signer: S' = (M')^d mod n
3. User: S = S' · r^(-1) mod n (unblind)
4. S is valid signature on M
```

**Applications:**
- Digital cash (privacy)
- E-voting systems
- Anonymous credentials

### **Multi-Signatures and Threshold Signatures**

**Multi-Signature:**
- Multiple signers cooperate to create single signature
- All must participate
- Compact representation

**Threshold Signature:**
- t-of-n threshold
- Any t parties can create signature
- Fewer than t cannot
- Shamir secret sharing based

**Applications:**
- Cryptocurrency wallets (M-of-N)
- Corporate signing policies
- Distributed systems

### **Certificate-Based Signatures (PKI)**

**X.509 Certificates:**
```
Certificate:
- Subject: Entity name
- Public Key: Subject's public key
- Issuer: CA name
- Validity: Not before/after dates
- Signature: CA's signature on above
```

**Certificate Chain:**
```
Root CA → Intermediate CA → End Entity
```

**Verification:**
1. Check certificate validity period
2. Verify CA signature
3. Check revocation status (CRL/OCSP)
4. Verify chain to trusted root
5. Use public key for signature verification

**Certificate Revocation:**
- **CRL** (Certificate Revocation List): Periodic list
- **OCSP** (Online Certificate Status Protocol): Real-time check
- **OCSP Stapling**: Server provides status

### **Advanced Signature Schemes**

**Ring Signatures:**
- Signer proves membership in group
- Cannot identify which member signed
- Used in Monero cryptocurrency

**Group Signatures:**
- Group member signs on behalf of group
- Anonymity within group
- Group manager can revoke anonymity

**Aggregate Signatures:**
- Combine multiple signatures into one
- Reduces bandwidth
- Used in blockchain systems

**Proxy Signatures:**
- Delegated signing authority
- Original signer authorizes proxy
- Used in distributed systems

### **Implementation Considerations**

**Security Best Practices:**

1. **Use Standard Libraries:**
   - OpenSSL, libsodium, Bouncy Castle
   - Don't implement crypto yourself

2. **Parameter Selection:**
   - RSA: ≥ 2048 bits, use RSA-PSS
   - ECDSA: P-256 minimum, P-384 recommended
   - Ed25519: Default choice for new systems

3. **Random Number Generation:**
   - Use cryptographically secure RNG
   - Never reuse nonce (DSA/ECDSA)
   - Consider deterministic schemes (EdDSA)

4. **Side-Channel Protection:**
   - Constant-time implementations
   - Protect against timing attacks
   - Ed25519 designed for this

5. **Hash Function:**
   - Use SHA-256 minimum
   - SHA-512 for 256-bit security
   - Match hash strength to key strength

**Performance Comparison (approximate):**
```
RSA-2048 Sign:    ~1ms
RSA-2048 Verify:  ~0.1ms
ECDSA-256 Sign:   ~0.3ms
ECDSA-256 Verify: ~0.6ms
Ed25519 Sign:     ~0.05ms
Ed25519 Verify:   ~0.1ms
```

**Standards and Regulations:**
- **FIPS 186-5**: DSA, RSA, ECDSA standards
- **RFC 8032**: EdDSA specification
- **NIST recommendations**: Post-quantum transition planning
- **eIDAS**: EU digital signature regulation

### **Post-Quantum Signatures**

**Quantum Threat:**
- Shor's algorithm breaks RSA, DSA, ECDSA
- Need quantum-resistant alternatives

**Candidate Schemes (NIST PQC):**

**Lattice-based:**
- **CRYSTALS-Dilithium** (NIST selected)
- Moderate key/signature sizes
- Fast

**Hash-based:**
- **SPHINCS+** (NIST selected)
- Conservative choice
- Large signatures

**Code-based:**
- Large public keys

**Multivariate:**
- Smaller signatures

**Transition Plan:**
- Hybrid signatures (classical + PQ)
- Gradual migration
- Expected timeline: 2025-2035

---

## **SUMMARY & RELATIONSHIPS**

### **Cryptographic Hierarchy**

```
One-Way Functions (Foundation)
    ↓
Pseudorandom Generators + Hash Functions
    ↓
Block Ciphers ← Stream Ciphers
    ↓                ↓
Message Authentication (MACs, AEAD)
    ↓
Digital Signatures (Non-repudiation)
```

### **Security Service Matrix**

| Service | Confidentiality | Integrity | Authentication | Non-Repudiation |
|---------|----------------|-----------|----------------|-----------------|
| Block/Stream Cipher | ✓ | ✗ | ✗ | ✗ |
| Hash Function | ✗ | ✓ | ✗ | ✗ |
| MAC | ✗ | ✓ | ✓ | ✗ |
| Digital Signature | ✗ | ✓ | ✓ | ✓ |
| AEAD | ✓ | ✓ | ✓ | ✗ |

### **Practical Recommendations**

**For New Systems:**
- Encryption: AES-256-GCM or ChaCha20-Poly1305
- Hashing: SHA-256 or SHA-3
- Signatures: Ed25519 or RSA-PSS-2048
- MACs: HMAC-SHA256 or Poly1305
- Access Control: ABAC or RBAC depending on complexity

**Key Sizes (2024+):**
- Symmetric: 256 bits
- RSA: 2048 bits minimum, 3072+ recommended
- ECC: 256 bits (P-256, Ed25519)
- Hash: 256 bits output

This completes the comprehensive deep dive into cryptographic primitives and security mechanisms. Each topic interconnects to build complete security systems.