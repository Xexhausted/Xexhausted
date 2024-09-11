Here’s a  summary of the 2018 British Airways data breach: 


1. **Initial Access** (June 22, 2018): The attacker gained access to British Airways' network using compromised credentials from an employee of Swissport, a third-party cargo handler. The account did not have multi-factor authentication enabled. 

2. **Breaking Out of Citrix Environment**: The attacker was initially restricted to a Citrix environment (a virtual desktop), but managed to escape this environment by unknown means.

3. **Privilege Escalation**: After escaping the Citrix environment, the attacker found an unsecured administrator password stored in plaintext on a server, allowing them to escalate their privileges within the system.
4. **Accessing Sensitive Data** (July 26, 2018): The attacker discovered plain text files containing sensitive customer data, including payment card details and CVV numbers, which were logged due to a human error. These details had been improperly stored since December 2015.

5. **Creating a Fake Domain**: The attacker registered a fake domain, "baways.com", which closely resembled the official British Airways site, to intercept more customer information.

6. **Compromising a Third-Party Script**: A third-party script called "Modernizer" on the British Airways website was breached by the attacker. The attacker modified this script to capture user payment and personal details during the booking process. 

7. **Data Exfiltration**: Upon payment confirmation, the modified script silently sent customers’ data to the fake domain (baways.com), with a slight delay to avoid detection. 

8. **Detection and Response** (September 5, 2018): British Airways was informed of the malicious code by a third party, and within 90 minutes, the script was removed from their website. On September 6, BA reported the breach to the ICO and informed 500,000 affected customers.