## 🔐 **Unit 2: Basic Cyber Security Concepts**

### 1. **What is the CIA Triad?**

**Answer:**
CIA stands for **Confidentiality, Integrity, and Availability**.

* **Confidentiality** ensures that data is only accessible to authorized users.
* **Integrity** ensures that data is accurate and not tampered with.
* **Availability** ensures systems and data are accessible when needed.

### 2. **What is threat modeling?**

**Answer:**
Threat modeling is the process of identifying potential security threats, vulnerabilities, and countermeasures to protect data and systems from unauthorized access or attacks.

### 3. **Difference between OSI and TCP/IP Models?**

**Answer:**

* **OSI Model:** 7 layers (Application to Physical)
* **TCP/IP Model:** 4 layers (Application, Transport, Internet, Network Access)
  The TCP/IP model is used in real-world networking, while OSI is conceptual.

---

## 🛡️ **Unit 3: Security Threats, Vulnerabilities & Attacks**

### 4. **Explain TCP 3-Way Handshake.**

**Answer:**
It’s used to establish a reliable connection:

1. **SYN** – Client requests connection.
2. **SYN-ACK** – Server acknowledges.
3. **ACK** – Client confirms and communication starts.

### 5. **What is the difference between threat, vulnerability, and attack?**

**Answer:**

* **Threat:** Potential danger.
* **Vulnerability:** Weakness in the system.
* **Attack:** Action taken to exploit a vulnerability.

### 6. **What is brute-force vs dictionary attack?**

**Answer:**

* **Brute-force:** Tries all possible combinations.
* **Dictionary:** Tries a list of known or common passwords.

### 7. **What are cryptographic authentication protocols?**

**Answer:**
These use encryption keys for verifying identity (e.g., Kerberos, digital certificates).

---

## 💻 **Unit 4: Application Security**

### 8. **What is SSL and how is it used?**

**Answer:**
**Secure Sockets Layer (SSL)** encrypts data during transmission, mainly used in web communication (`https`).

### 9. **What is SET (Secure Electronic Transaction)?**

**Answer:**
A protocol for securing credit card transactions on the Internet using digital certificates.

### 10. **What is Kerberos?**

**Answer:**
A network authentication protocol that uses secret-key cryptography and a trusted third party (Key Distribution Center - KDC).

### 11. **What is IPsec?**

**Answer:**
IPsec is a protocol suite for securing IP communications by authenticating and encrypting each IP packet.

---

## 🌐 **Unit 5: Network & Security Devices**

### 12. **What are the phases of vulnerability assessment?**

**Answer:**

1. Planning
2. Discovery (Scanning)
3. Analysis
4. Reporting

### 13. **What is the role of a firewall?**

**Answer:**
A firewall monitors and controls incoming/outgoing traffic based on security rules.

### 14. **Name any two security hardening steps for a network device.**

**Answer:**

* Disabling unused services
* Changing default passwords

---

## 🔏 **Unit 6: Security Policies and Handshake**

### 15. **What is a digital signature?**

**Answer:**
A **digital signature** is a mathematical scheme for verifying the authenticity and integrity of digital messages using cryptographic algorithms.

### 16. **What is mutual authentication?**

**Answer:**
Both client and server verify each other's identity before communication.

---

## 🔬 **LAB Viva Questions (with tools)**

### 17. **What is Wireshark and how do you use it?**

**Answer:**
Wireshark is a network packet analyzer used to capture and inspect data packets in real-time for analysis and troubleshooting.

### 18. **What does the `nmap -O` command do?**

**Answer:**
It performs an OS detection scan to identify the operating system of a target host.

### 19. **Explain the difference between ICMP Scan and TCP SYN Scan.**

**Answer:**

* **ICMP Scan:** Uses ping to find live hosts.
* **TCP SYN Scan:** Sends SYN packets to detect open ports (stealthy scan).

### 20. **What is TCPDump?**

**Answer:**
A command-line packet analyzer tool that allows users to capture and analyze network traffic.

### 21. **What is Netdiscover used for?**

**Answer:**
Netdiscover is a tool for network address discovery to find live hosts on a network using ARP requests.

### 22. **What is Shodan and how is it useful?**

**Answer:**
Shodan is a search engine for Internet-connected devices. It can locate vulnerable devices like webcams, servers, or IoT devices.

### 23. **How do you spoof an IP in Kali Linux?**

**Answer:**
Using tools like `hping3` or `ettercap`, or editing packet headers to change the source IP in outgoing packets.

### 24. **What is an NSE Script in Nmap?**

**Answer:**
Nmap Scripting Engine (NSE) scripts are used to automate network scanning tasks like vulnerability detection.

---

## ✅ Bonus: Expected Practical Questions

### 25. **Demonstrate how to monitor HTTP traffic using Wireshark.**

> Filter: `http`

### 26. **Show ARP packets in Wireshark.**

> Filter: `arp`

### 27. **Capture and analyze ICMP packets.**

> Command: `nmap -sP target_ip`
> Wireshark filter: `icmp`

### 28. **Write a simple NSE script to check for HTTP title.**

```lua
local http = require "http"
local shortport = require "shortport"
local stdnse = require "stdnse"

description = [[
Fetches and displays the title of the root webpage ("/") from an HTTP service.
]]

author = "You"
license = "Same as Nmap--See https://nmap.org/book/man-legal.html"
categories = {"discovery", "safe"}

portrule = shortport.http

action = function(host, port)
  local response = http.get(host, port, "/")
  if not response then
    return "Failed to retrieve HTTP response"
  end

  local title = response.body and response.body:match("<title>(.-)</title>")
  if title then
    return "Title: " .. title
  else
    return "Title not found"
  end
end
```

---

### 🔍 **Explanation**

* `require "http"`: Imports HTTP library for web requests.
* `shortport.http`: Applies the script only to HTTP ports (e.g., 80, 8080).
* `http.get(...)`: Sends GET request to `/` of the target.
* `match("<title>(.-)</title>")`: Extracts text between `<title>` tags.
* Proper error checks are added for robustness.

---

### 🧪 How to Run This NSE Script:

1. Save it as `http-title-simple.nse`.
2. Run it with:

   ```bash
   nmap --script http-title-simple -p 80 <target-ip>
   ```

 



 
