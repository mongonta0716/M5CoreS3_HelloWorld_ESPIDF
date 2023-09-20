# M5CoreS3_HelloWorld_ESPIDF
HelloWorld project in ESP-IDF on VSCode+PlatformIO

# 概要
このリポジトリは、VSCode + PlatformIO上でespidfフレームワークを利用したHelloWorldをするだけのものです。

# プロジェクトを動作させるときの注意事項

## menuconfig

menuconfigは、**PlatforomIO上のメニュー**から「New Terminal」で開き下記のコマンドを実行します。(VSCodeのターミナルからはpioが実行できない場合があります。)

```pio run -t menuconfig```

## CMakeLists.txt

使用するプロジェクトにより./CMakeLists.txt, ./src/CMakeLists.txt の内容を変更する必要があります。

## components フォルダ

esp-idfの仕組みではlib_depsではなく、ライブラリをcomponentsに置く必要があるようです。ESP-IDFに対応していないArduinoライブラリを置いてもビルドできない場合があります。



# 2023/9/20 時点での注意事項

espressif32の最新(6.4.0 esp-idf5.1.1)を使うとM5GFXでビルドエラーが起こります。2023/9/20時点のM5GFXのdevelopでは修正されているので、次のバージョンでは。修正されると思います。git submodule addでdevelopブランチを利用する手もあります。


