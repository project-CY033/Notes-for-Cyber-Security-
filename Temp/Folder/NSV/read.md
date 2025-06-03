

**Q1. What is Secure Coding?**
**A:** Secure coding is the practice of writing software so that it is protected from vulnerabilities and security threats. It ensures that the code does not expose the application to security flaws like injection, XSS, or buffer overflows.

**Q2. What is the Secure Development Life Cycle (SDLC)?**
**A:** The SDLC is a process used to build secure software by integrating security activities like threat modeling, code review, and testing into each phase of the development lifecycle.

**Q3. What is Application Security Testing?**
**A:** It involves identifying security flaws in applications through methods like static analysis, dynamic analysis, and penetration testing.

---

### 🛡️ **Unit 2 – Vulnerabilities**

**Q4. What is an Injection attack?**
**A:** It occurs when untrusted data is sent to an interpreter as part of a command or query, e.g., SQL Injection. It can lead to unauthorized access or data loss.

**Q5. Explain Cross-Site Scripting (XSS).**
**A:** XSS allows attackers to inject malicious scripts into content from otherwise trusted websites, affecting users who visit those pages.

**Q6. What is Broken Authentication?**
**A:** It refers to flaws in session management or credential handling, allowing attackers to compromise passwords, keys, or session tokens.

**Q7. What is CSRF (Cross-Site Request Forgery)?**
**A:** CSRF tricks a user’s browser into executing unwanted actions in a web app where they are authenticated.

**Q8. What is Insecure Direct Object Reference?**
**A:** When an application exposes internal implementation objects (like files or database keys) without proper access control.

**Q9. What is the risk of using components with known vulnerabilities?**
**A:** These can be easily exploited by attackers if not updated or patched.

---

### 🌐 **Unit 4 – Vulnerability Analysis of Application Protocols**

**Q10. What is File Inclusion vulnerability?**
**A:** It occurs when a file is included without proper validation, allowing attackers to execute malicious scripts (e.g., LFI, RFI).

**Q11. What is SSI Injection?**
**A:** Server Side Includes (SSI) injection allows attackers to execute commands on the server by injecting SSI directives.

**Q12. How can cookies be a security risk?**
**A:** Insecure cookie handling can lead to authentication bypass if cookies are not encrypted or validated properly.

---

### 📶 **Unit 5 – Wireless Network Vulnerability**

**Q13. What is MAC Filtering and how can it be bypassed?**
**A:** MAC Filtering controls access based on MAC addresses. It can be bypassed by spoofing an allowed MAC.

**Q14. What is the Caffe Latte Attack?**
**A:** It targets wireless clients by capturing encrypted packets and cracking WEP without needing an access point.

**Q15. What is Deauthentication Attack?**
**A:** It forcibly disconnects clients from a wireless network, useful for further attacks like Evil Twin or MITM.

**Q16. What is WPA Cracking without an AP (AP-less attack)?**
**A:** Capturing a WPA handshake by forcing a client to connect to a rogue AP and then cracking the password offline.

---

### 🛡️ **Unit 6 – Web Security Vulnerabilities**

**Q17. What is Passive Vulnerability Analysis?**
**A:** Analyzing vulnerabilities without directly interacting with the target (e.g., analyzing headers, metadata).

**Q18. What is Source Code Analysis?**
**A:** Reviewing the source code to identify security flaws like hardcoded passwords or input validation issues.

---

## 💻 LAB Viva Questions

### 🔍 **Scanning and Enumeration**

**Q19. What are the types of scanning?**
**A:**

* Network scanning (find live hosts)
* Port scanning (open/closed ports)
* Vulnerability scanning (find weaknesses)

**Q20. What is the difference between TCP and UDP scan in Nmap?**
**A:** TCP is connection-oriented and reliable, while UDP is connectionless and can be stealthier but less reliable for response detection.

**Q21. What is enumeration in Nmap?**
**A:** Enumeration extracts more detailed information about systems such as users, shares, and services.

---

### 🧪 **Lab Tools & Frameworks**

**Q22. What is OWASP ESAPI?**
**A:** It’s a set of security controls (like input validation, encryption) for securing Java web applications.

**Q23. What is Nikto used for?**
**A:** Nikto is a web server scanner used to identify vulnerabilities like outdated software, XSS, and misconfigurations.

**Q24. What is Burp Suite?**
**A:** A web vulnerability scanner and proxy tool used for intercepting and modifying HTTP traffic for testing.

**Q25. What is Nessus used for?**
**A:** Nessus is a vulnerability scanner used to detect vulnerabilities in systems, applications, and devices.

**Q26. What is Metasploit Framework?**
**A:** A penetration testing platform used to find, exploit, and validate vulnerabilities in systems.

**Q27. What is Netcat?**
**A:** A networking utility used for reading/writing data across TCP or UDP connections. It’s useful for banner grabbing and backdoors.

**Q28. What can Wireshark do?**
**A:** It captures and analyzes network traffic for security or troubleshooting purposes.

---

### 🧠 **Bonus Conceptual Questions**

**Q29. What are the stages of a penetration test?**
**A:** Planning, Reconnaissance, Scanning, Exploitation, Post-Exploitation, Reporting.

**Q30. What is the OWASP Top 10?**
**A:** A standard awareness document listing the top 10 most critical web application security risks.

---

 
