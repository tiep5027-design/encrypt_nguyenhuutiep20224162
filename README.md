# encrypt_nguyenhuutiep20224162

## Giới thiệu
Đây là project mã hóa chuỗi sử dụng thuật toán RC4 viết bằng C++. Chương trình cho phép người dùng nhập plaintext và key từ bàn phím, sau đó xuất ra ciphertext dưới dạng hex.

---

## Hướng dẫn chạy chương trình

### Biên dịch chương trình mã hóa
```sh
g++ -o rc4_encrypt main.cpp rc4_encrypt.h rc4_ksa.h rc4_prga.h
```

### Chạy chương trình mã hóa
```sh
./rc4_encrypt
```
Hoặc trên Windows:
```sh
rc4_encrypt.exe
```

- Nhập **plaintext** khi được yêu cầu (ví dụ: `Hanoi University of Science and Technology`)
- Nhập **key** khi được yêu cầu (ví dụ: `DHBK`)
- Kết quả sẽ là ciphertext ở dạng hex, mỗi byte cách nhau bằng dấu cách.

---

## Bộ test vector

| Plaintext                                   | Key    | Ciphertext (hex)                                                                                             |
|---------------------------------------------|--------|--------------------------------------------------------------------------------------------------------------|
| Hanoi University of Science and Technology  | DHBK   | 8f 63 b8 d5 61 e9 53 ae bc 72 ea 20 fa 28 3f 3c 32 71 aa 31 5e 55 f7 13 dd 99 a9 9d 2 6e db fd 9e 6d a5 9c ba 19 2e a bc 52 |
| nguyenhuutiep                              | SecretKey | 5d 6c db f7 9a 59 1e c2 5c ee 3e 7f 0b                                                                       |

> **Lưu ý:** Ciphertext xuất ra là các byte hex, cách nhau bằng dấu cách.

---

## Liên hệ

- Tác giả: tiep5027-design
- Link repo: [https://github.com/tiep5027-design/encrypt_nguyenhuutiep20224162](https://github.com/tiep5027-design/encrypt_nguyenhuutiep20224162)
