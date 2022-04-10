# ConsoleImageGenerator
This application generates an ASCII art from the an image file.

## Build Steps[On ubuntu 20.04]:
1. git clone https://github.com/K-ran/ConsoleImageGenerator/
2. cd ConsoleImageGenerator
3. git submodule update --init
4. Build opencv
   1. mkdir build
   2. cd build
   3. cmake ../opencv
   4. make
   5. cd .. 
5. cmake .
6. make

## Usage:
`
./cvp imagepath [--ws width_scaling] [--hs height_scaling]
`
### Example:
./cvp testImage.jpg 
```
t///tt/t//tttttttttttttt\)/|(11}?1(ttttttttttttttttttttttttttt
ttttttttttttttttttttfn)-+[-+?1{?}]?+{tfffffffttftttfftffftfftt
ttttfftttffftfffffft\?")xcXXzr\(?>i~<~[fffffffffffffffffffffff
ftfffffffffffffffff){ixcYUJJUXzn(?~>iil<fjjjfjjjjffjfffjffffff
ffffffffffjfjffjjjf?[xvYCCCJUYzux/(}-l!!+jjjjjjjjjjjjjjjjjjjjj
jjjfjjjjjjjjjjrrjj]~jucYUCUYUYzunjtt|?IIitrrrrrrrjrrrjrjrjjjrj
jjjjrrrjrjrrrrrrrr|+jv//}/nzvt}??[[)|[II!frrrrrrrrrrrrrrrrrrrr
rrrrrrrrrrrrrrrrxrr]}111}(]Ux(|1]}[\))i+?rxrxrrrrrxrrxrrrrrrrr
rrrrrxxrxxxxrrxxxxxr/funuv/Ur{jxvrrf((}(txxxxxxxxxxxxxxxxxxxxx
rxxxxxxxxxxxxxxxxxxxunzXCUccr|/uxxj/|1{jfxxxxxxxxxxxxxxxxxxxxx
xxxxxxnxnxnnxnnxxxnnvxcYYXf}1{)fxrrt)11/xnnnnnnxnnnnnnnnnxnnnx
xnnnnnnnnnnnnnnnnnnnUvucvjntt}]])rt|1[}\nunununnnnnnunnnnunnnn
nnnnnnnnuuuuuuuuuuuuur}xxcvnf//ttt()-{}-[uuuuuuuuuuunnuuuuuuuu
unuuuuuuuuuuuuuuv\{}[[\|fxczvujt(}]-{{>,,,,~}}uuuuuuuuuuuuuuuu
uuuuuuu{::;,,,;;;:;:::_j[])[[?-_~+_}<^",",,,,,,:>[}{vvvvvvvuuv
vvvvv1I::,;,::::,:I,:":?|\1_~~~~+l<^^"",,,,,,:,,::::::}}vvvvvv
vvvv;I;::,:,:":,,;:,;:::,",;;^^^^^^^"",,,,,,,:,::::,,,,,:}cccc
vvcl:;::",:,:,,,;:,,;:,::,","^^,"^,,,,,,,,:,:::::,,,,,",,,;cvc
```
