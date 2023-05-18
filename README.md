# Encryption-and-Deycription-Application
Encryption and decryption are fundamental processes in cryptography used to secure and protect sensitive information.

## Rule:
In the context of the formula **f(p) = (p + k) % 26**, where p represents the plaintext and k is a fixed key, encryption is the process of transforming the plaintext into ciphertext. To encrypt a message, each letter in the plaintext is shifted by a fixed amount (k) within the range of the alphabet (26 letters). The modulo operation (% 26) ensures that the result stays within the bounds of the alphabet. This process obscures the original message and makes it difficult to understand without knowledge of the key. Key can be substituted by any value.

![image](https://github.com/Arwa-Fawzy/Encryption-and-Deycription-Application/assets/101527083/a8390087-5ef9-4d8f-883f-7e29ace52c91)


Decryption, on the other hand, is the reverse process of encryption. It involves transforming the ciphertext back into plaintext using the same key. By applying the formula f(p) = (p + k) % 26 in reverse, the original message can be recovered. Each letter in the ciphertext is shifted in the opposite direction by the same fixed amount (k) to obtain the original plaintext.

![image](https://github.com/Arwa-Fawzy/Encryption-and-Deycription-Application/assets/101527083/5e9b1fa5-e7fe-486e-ac24-53ea123ea557)

It's important to note that the formula provided represents a simple example of a symmetric encryption algorithm, known as the Caesar cipher, which operates on a single key for both encryption and decryption. In more complex encryption schemes, such as those based on asymmetric cryptography, different keys are used for encryption and decryption, providing enhanced security.
