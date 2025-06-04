```
Subject :- ANSF (Application and Network Security Fundamental)
here is ANSF syllabus  and Lab syllabus  now give me viva question with answer    that ask in practical exame


ANSF syllabus



Unite - 2 Basic Cyber Security Concepts: 
Concepts of Confidentiality, Integrity and Availability; Threat Modeling, Overview of Security Models (OSI and TCP/IP Models), Cyber Security basic Terminologies 
 
 

Unite - 3  Security Threats, Vulnerabilities & Attacks: 
Network Protocols, Threat, Vulnerability and Attack, TCP Handshaking, Password Based, Address Based, Cryptographic Authentication. Passwords in distributed systems, on-line vs offline guessing, storing. Cryptographic Authentication: passwords as keys, protocols, KDC's Certification Revocation, Inter-domain, groups, delegation. Authentication of People: Verification techniques, passwords, length of passwords, password distribution, smart cards, biometrics. 

Unite - 4  Application Security: 
Introduction to Applications, Security for electronic commerce: SSL, SET, System security- intrusion detection, malicious software, firewalls. 

Authentication Applications:  Kerberos, X.509 Authentication Service, Electronic Mail Security: Pretty Good Privacy, S/MIME.  
IP Security: IP Security Overview, IP Security Architecture, Authentication Header, Encapsulating Security Payload, Combining Security Associations, Key Management.
Kerberos V5: names, realms, delegation, forwarding and proxies, ticket lifetimes, revoking
tickets, multiple Realms


Unite - 5
Network & Security Devices: Network management security, security hardening guidelines for Network & security devices, Network vulnerability assessment phases, Device Auditing Switch, Firewall, Router, Core-Switch.
Web Security: Web Security Considerations, Secure Sockets Layer and Transport Layer Security, Secure Electronic Transaction.


Unite - 6 
Security Policies and Handshake: Digital Signatures, Authentication Protocols, Digital Signature Standard, security policy, high and low level policy, user issues, protocol problems, assumptions, shared secret protocols, public key protocols, mutual authentication, 








Application and Network Security Fundamental lab

List of Experiments

1. Reporting and analysing the network related threats using tools



2. Perform the following Scan using Wireshark and analyze your results 
(a)Analyze TCP session


(b) Perform and analyze these scans
(i) Start a Wireshark capture. Open a Windows-> command window and perform a Host Scan (using ICMP packets) on a neighbours machine using nmap -sP [neighbors ip address]. Stop the capture and filter the traffic for ARP and ICMP packets.


(ii)Start a new Wireshark capture, and then perform a host scan (ICMP scan) on a system out with the subnet, such as nmap -sP scanme.nmap.org.(Stop the capture and filter the traffic for ARP and ICMP packets and Compare with previous results.

(iii) Start a new Wireshark capture, and then perform a complete Port Scan (in this case a TCP SYN scan) and an Operating System Fingerprint on a neighbours machine using nmap -O [neighbours ip address]. The -O option should provide the OS running on the scanned machine. Stop the capture and filter for source address == your machines address if necessary.

3. To Analysis Network using Wireshark for 
(a) Traffic Monitoring (TCP slow down and HTTP slow down)
(b) Packet Sniffing

 4. Explore, execute and analysis traffic using TCP Dump and Net discover tools

5. To explore Shodan for 
(a) locating Boats and Ship Locations
(b) Searching and capturing Live Cameras.
(c) To Write a small NSE Script 
6. To spoof IP address of your own system using Kali Linux


```

---
---

#### 🔐 **Unit 2: Basic Cyber Security Concepts**

**Q1. What is the CIA Triad in Cybersecurity?**
**Ans:** The CIA triad stands for **Confidentiality, Integrity, and Availability**—the three core principles of cybersecurity.

* **Confidentiality:** Ensuring data is not accessed by unauthorized users.
* **Integrity:** Ensuring data is not tampered with.
* **Availability:** Ensuring systems and data are accessible when needed.

**Q2. What is Threat Modeling?**
**Ans:** Threat modeling is the process of identifying, evaluating, and prioritizing potential threats to a system to reduce risk.

**Q3. What are the layers of the OSI Model?**
**Ans:** OSI Model has 7 layers:

1. Physical
2. Data Link
3. Network
4. Transport
5. Session
6. Presentation
7. Application

---

#### 💣 **Unit 3: Security Threats, Vulnerabilities & Attacks**

**Q4. What is TCP Handshaking?**
**Ans:** It is a 3-step process (SYN, SYN-ACK, ACK) used to establish a reliable connection between client and server.

**Q5. What is a Vulnerability and how is it different from a Threat?**
**Ans:**

* **Vulnerability:** Weakness in a system (e.g., unpatched software).
* **Threat:** Potential danger that can exploit a vulnerability (e.g., hacker).

**Q6. What is KDC (Key Distribution Center)?**
**Ans:** A trusted third-party in Kerberos that distributes session keys securely between users.

---

#### 🔐 **Unit 4: Application Security**

**Q7. What is SSL and how does it work?**
**Ans:** SSL (Secure Socket Layer) is a protocol for encrypting information over the internet. It uses asymmetric encryption to exchange symmetric keys securely.

**Q8. What is Kerberos?**
**Ans:** Kerberos is an authentication protocol that uses tickets issued by a KDC to authenticate users in a secure way.

**Q9. What is PGP?**
**Ans:** Pretty Good Privacy (PGP) is used to secure email communication by encrypting the message content and digitally signing it.

---

#### 🌐 **Unit 5: Network & Security Devices**

**Q10. What is Security Hardening?**
**Ans:** It’s the process of securing a system by reducing its surface of vulnerability (e.g., disabling unused services, applying patches).

**Q11. What are Firewalls and their types?**
**Ans:** Firewalls monitor and control incoming/outgoing traffic based on security rules. Types: Packet-filtering, Stateful inspection, Proxy, and Next-Gen Firewall.

**Q12. What is a Network Vulnerability Assessment?**
**Ans:** A process to identify weaknesses in a network system before attackers can exploit them.

---

#### 📝 **Unit 6: Security Policies and Handshake**

**Q13. What is a Digital Signature?**
**Ans:** A digital signature is a cryptographic technique that ensures the authenticity and integrity of a message.

**Q14. What is the difference between Public Key and Shared Secret Protocols?**
**Ans:**

* **Public Key:** Uses separate public/private keys for encryption and decryption.
* **Shared Secret:** Both parties share the same key.

**Q15. What is Mutual Authentication?**
**Ans:** It is a process where both the client and server authenticate each other during communication.

---

### 💻 **Lab-Based Viva Questions**

---

#### **Experiment 1: Reporting and Analyzing Threats**

**Q16. Which tools can be used to detect network threats?**
**Ans:** Wireshark, TCPDump, Netdiscover, Nmap, Shodan, Snort, and Suricata.

---

#### **Experiment 2: Wireshark Scan Analysis**

**Q17. What is an ICMP scan?**
**Ans:** An ICMP scan uses "ping" packets to discover active hosts in a network.

**Q18. How do you identify a TCP SYN scan in Wireshark?**
**Ans:** Look for packets with the SYN flag set without ACK—indicating a scan attempt.

---

#### **Experiment 3: Packet Sniffing and Monitoring**

**Q19. What is packet sniffing?**
**Ans:** Capturing data packets that are transmitted over a network for analysis.

**Q20. What symptoms indicate a TCP or HTTP slow down?**
**Ans:** Repeated retransmissions, delayed ACKs, or increased round-trip times.

---

#### **Experiment 4: TCPDump and Netdiscover**

**Q21. What is TCPDump used for?**
**Ans:** It's a command-line packet analyzer used to capture network traffic.

**Q22. What is Netdiscover used for?**
**Ans:** It identifies live hosts in a local network using ARP requests.

---

#### **Experiment 5: Shodan and NSE Scripting**

**Q23. What is Shodan?**
**Ans:** Shodan is a search engine that lets users find internet-connected devices like cameras, routers, ships, etc.

**Q24. What is an NSE Script in Nmap?**
**Ans:** NSE (Nmap Scripting Engine) allows automation of tasks like vulnerability detection using Lua scripts.

---

#### **Experiment 6: IP Spoofing in Kali Linux**

**Q25. What is IP Spoofing?**
**Ans:** Sending packets with a forged IP address to impersonate another system.

**Q26. How do you spoof an IP in Kali?**
**Ans:** Using tools like `hping3` or `scapy` to craft packets with a spoofed source IP.

---
 
