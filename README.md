# RussianRoulette

RussianRoulette, bir C++ konsol uygulaması olarak tasarlanmış, oyuncunun rastgele bir sayı seçerek hayatta kalmaya çalıştığı bir oyun simülasyonudur. Oyunda, oyuncunun seçtiği sayı ile ölümcül sayı eşleşirse oyuncu kaybeder.

## Özellikler

- **Rastgele Sayı Üretimi**: Oyunda ölümcül bir sayı rastgele belirlenir.
- **Kullanıcı Girdisi**: Oyuncu, 1 ile 6 arasında bir sayı seçer.
- **Önceki Seçim Kontrolü**: Oyuncu daha önce seçtiği bir sayıyı tekrar seçerse uyarılır.
- **Son Şans**: Oyuncuya son bir karar verme şansı sunulur.
- **Dinamik Mesajlar**: Oyuncunun seçimlerine göre farklı mesajlar görüntülenir.

## Nasıl Kullanılır?

1. Depoyu klonlayın veya `RussianRoulette.cpp` dosyasını yerel makinenize kopyalayın.
2. Programı bir C++ derleyicisi kullanarak derleyin (örneğin, `g++`).
   ```bash
   g++ RussianRoulette.cpp -o RussianRoulette
   ```
3. Derlenmiş çalıştırılabilir dosyayı çalıştırın.
   ```bash
   ./RussianRoulette
   ```
4. Oyuncu, 1 ile 6 arasında bir sayı seçerek oyuna başlar.
5. Oyuncu, seçtiği sayının ölümcül sayı olup olmadığını öğrenir:
   - Eğer sayı ölümcül değilse, oyuncuya kalan şansı gösterilir.
   - Eğer sayı ölümcülse, oyuncu kaybeder.
6. Oyuncu, son şansında devam edip etmeme kararı verebilir.

## Örnek

```plaintext
WELCOME TO RUSSIAN RULETTE!!
You have 1/6 chance to die
Pick a Number (If you choose same thing you'll die!): 3
You have 1/5 chance to die.
Pick a Number (If you choose same thing you'll die!): 5
You have 1/4 chance to die.
Pick a Number (If you choose same thing you'll die!): 2
YOU ARE DEAD!
```

## Gereksinimler

- Bir C++ derleyicisi (örneğin, `g++`).
- Terminalde C++ programlarını çalıştırma konusunda temel bilgi.

## Notlar

- Oyunda kullanılan rastgele sayı üretimi, her çalıştırmada farklı bir ölümcül sayı belirler.
- Oyuncunun daha önce seçtiği bir sayıyı tekrar seçmesi engellenir.
- Program, kullanıcı girdisi doğrulama ve dinamik mesajlar içerir.

## Lisans

Bu proje açık kaynaklıdır ve [MIT Lisansı](https://opensource.org/licenses/MIT) altında sunulmaktadır.
