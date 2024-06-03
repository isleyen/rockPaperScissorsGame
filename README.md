# Taş Kağıt Makas Oyunu

Oyunumuz basit bir taş-kağıt-makas oyunudur.

## Oynanış

![image](https://github.com/isleyen/rockPaperScissorsGame/assets/136992260/a6360f89-ba1e-44e2-bd26-114963d4feb7)

Kullanıcı rock, paper veya scissors üçünden birini giriyor ve bilgisayar da bu değerlerden birini atıyor(nasıl olduğunu daha detaylı anlatacağım) ve bunlar kıyaslanıyor. Kazanan +1 puan alıyor ikisi de aynısını söylemişse iki taraf ta +1 alıyor (son örnekte görüldüğü gibi). En son enter tuşuna basarak kimin kazandığını görüyoruz ve oyun bitiyor.

# Kodları İnceleyelim

![image](https://github.com/isleyen/rockPaperScissorsGame/assets/136992260/11f588f3-75e7-4dd5-928e-f53fd8d3d0b4)

Random sayı atayacağımız için __ctime__ ve __cstdlib__ kütüphanelerimizi tanımladık.

![image](https://github.com/isleyen/rockPaperScissorsGame/assets/136992260/df88c2cf-c9ce-4ce3-8833-d46f56aff81a)

İlk skorlarımızı 0 olarak tanımladık.

![image](https://github.com/isleyen/rockPaperScissorsGame/assets/136992260/ece0f2bd-b10b-4209-8311-385bcb9def08)

Dizi olarak taş-kağıt-makası atatık.

![image](https://github.com/isleyen/rockPaperScissorsGame/assets/136992260/7f26e3d2-2fec-48a9-aaad-8ab83f098341)

Kullanıcıdan bir değer alınır ve player içerisine atanır. Eğer yanlış yazarsa üçünden birini doğru yazana kadar döngü döner.

![image](https://github.com/isleyen/rockPaperScissorsGame/assets/136992260/a29ccd35-18b5-44f3-a8ab-2327467c87ce)

![image](https://github.com/isleyen/rockPaperScissorsGame/assets/136992260/2a46068a-4655-4d55-8979-872ba3934b74)

Random sayi üreten fonksiyonumuzun ürettiği sayinin %3 modunu alarak kalan sayiyi(0,1,2) da dizimizde denk gelen değere atıyoruz bu da bize bilgisayar için rastgele taş- kağıt- makas oluşturuyor.

> [!TIP]
> Random üretilen sayi: 105 olsun %3 modunu al kalan 0. O zaman bilgisayar rock(taş) seçer.

![image](https://github.com/isleyen/rockPaperScissorsGame/assets/136992260/b8b0a740-54f2-4873-a47d-fc74d5b86a5b)

Burada da gerekli kurallara göre if ,else if komutlarımızı yazdık ve puan atamalarımızı gerçekleştirdik.

![image](https://github.com/isleyen/rockPaperScissorsGame/assets/136992260/bb65db5f-4cce-4c96-a49a-cb786ca09516)

En sonda da kim kazandıysa veya berabere kalındıysa ekrana yazdırdık.

Hedef Dosaya: rockPaperScissorsGame.cpp
