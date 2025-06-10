# Note List

Note List, bir C++ konsol uygulaması olarak tasarlanmış, kullanıcıdan notlar alarak bu notları sıralı bir şekilde listeleyen bir uygulamadır. Kullanıcı, geçerli notlar girebilir ve `-1` girerek notların sıralı bir listesini görüntüleyebilir.

## Özellikler

- **Not Girişi**: Kullanıcı, 0 ile 100 arasında geçerli notlar girebilir.
- **Geçersiz Not Kontrolü**: Geçersiz bir not girildiğinde program sonlanır.
- **Notların Sıralanması**: Girilen notlar büyükten küçüğe sıralanır.
- **Orijinal İndeks Bilgisi**: Sıralanan notlar, orijinal öğrenci sırasıyla birlikte görüntülenir.

## Nasıl Kullanılır?

1. Depoyu klonlayın veya `Note List.cpp` dosyasını yerel makinenize kopyalayın.
2. Programı bir C++ derleyicisi kullanarak derleyin (örneğin, `g++`).
   ```bash
   g++ "Note List.cpp" -o NoteList
   ```
3. Derlenmiş çalıştırılabilir dosyayı çalıştırın.
   ```bash
   ./NoteList
   ```
4. Kullanıcı, 0 ile 100 arasında notlar girebilir.
5. Kullanıcı, `-1` girerek notların sıralı bir listesini görüntüleyebilir.

## Örnek

```plaintext
Enter Notes: 85
Enter Notes: 90
Enter Notes: 75
Enter Notes: -1
2. Ogrencinin Notu: 90
1. Ogrencinin Notu: 85
3. Ogrencinin Notu: 75
```

## Gereksinimler

- Bir C++ derleyicisi (örneğin, `g++`).
- Terminalde C++ programlarını çalıştırma konusunda temel bilgi.

## Notlar

- Kullanıcı, yalnızca 0 ile 100 arasında geçerli notlar girebilir. Geçersiz bir not girildiğinde program sonlanır.
- Notlar sıralandıktan sonra, her notun orijinal öğrenci sırası da görüntülenir.
- Program, kullanıcı dostu bir şekilde dinamik mesajlar içerir.

## Lisans

Bu proje açık kaynaklıdır ve [MIT Lisansı](https://opensource.org/licenses/MIT) altında sunulmaktadır.
