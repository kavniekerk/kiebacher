/*******************************
*    CalcHEP  3.6.28*
*******************************/
#include"num_in.h"
#include"num_out.h"
extern FNN F1_ext,F2_ext,F3_ext,F4_ext,F5_ext,F6_ext,F7_ext,F8_ext,F9_ext
 ,F10_ext,F11_ext,F12_ext,F13_ext,F14_ext,F15_ext,F16_ext,F17_ext,F18_ext
 ,F19_ext,F20_ext,F21_ext,F22_ext,F23_ext,F24_ext,F25_ext,F26_ext,F27_ext
 ,F28_ext,F29_ext,F30_ext,F31_ext,F32_ext,F33_ext,F34_ext,F35_ext,F36_ext
 ,F37_ext,F38_ext,F39_ext,F40_ext,F41_ext,F42_ext,F43_ext,F44_ext,F45_ext
 ,F46_ext,F47_ext,F48_ext,F49_ext,F50_ext,F51_ext,F52_ext,F53_ext,F54_ext
 ,F55_ext,F56_ext,F57_ext,F58_ext,F59_ext,F60_ext,F61_ext,F62_ext,F63_ext
 ,F64_ext,F65_ext,F66_ext,F67_ext,F68_ext,F69_ext,F70_ext,F71_ext,F72_ext
 ,F73_ext,F74_ext,F75_ext,F76_ext,F77_ext,F78_ext,F79_ext,F80_ext,F81_ext
 ,F82_ext,F83_ext,F84_ext,F85_ext,F86_ext,F87_ext,F88_ext,F89_ext,F90_ext
 ,F91_ext,F92_ext,F93_ext,F94_ext,F95_ext,F96_ext,F97_ext,F98_ext,F99_ext
 ,F100_ext,F101_ext,F102_ext,F103_ext,F104_ext,F105_ext,F106_ext,F107_ext
 ,F108_ext,F109_ext,F110_ext,F111_ext,F112_ext,F113_ext,F114_ext,F115_ext
 ,F116_ext,F117_ext,F118_ext,F119_ext,F120_ext,F121_ext,F122_ext,F123_ext
 ,F124_ext,F125_ext,F126_ext,F127_ext,F128_ext,F129_ext,F130_ext,F131_ext
 ,F132_ext,F133_ext,F134_ext,F135_ext,F136_ext,F137_ext,F138_ext,F139_ext
 ,F140_ext,F141_ext,F142_ext,F143_ext,F144_ext,F145_ext,F146_ext,F147_ext
 ,F148_ext,F149_ext,F150_ext,F151_ext,F152_ext,F153_ext,F154_ext,F155_ext
 ,F156_ext,F157_ext,F158_ext,F159_ext,F160_ext,F161_ext,F162_ext,F163_ext
 ,F164_ext,F165_ext,F166_ext,F167_ext,F168_ext,F169_ext,F170_ext,F171_ext
 ,F172_ext,F173_ext,F174_ext,F175_ext,F176_ext,F177_ext,F178_ext,F179_ext
 ,F180_ext,F181_ext,F182_ext,F183_ext,F184_ext,F185_ext,F186_ext,F187_ext
 ,F188_ext,F189_ext,F190_ext,F191_ext,F192_ext,F193_ext,F194_ext,F195_ext
 ,F196_ext,F197_ext,F198_ext,F199_ext,F200_ext,F201_ext,F202_ext,F203_ext
 ,F204_ext,F205_ext,F206_ext,F207_ext,F208_ext,F209_ext,F210_ext,F211_ext
 ,F212_ext,F213_ext,F214_ext,F215_ext,F216_ext,F217_ext,F218_ext,F219_ext
 ,F220_ext,F221_ext,F222_ext,F223_ext,F224_ext,F225_ext,F226_ext,F227_ext
 ,F228_ext,F229_ext,F230_ext,F231_ext,F232_ext,F233_ext,F234_ext,F235_ext
 ,F236_ext,F237_ext,F238_ext,F239_ext,F240_ext,F241_ext,F242_ext,F243_ext
 ,F244_ext,F245_ext,F246_ext,F247_ext,F248_ext,F249_ext,F250_ext,F251_ext
 ,F252_ext,F253_ext,F254_ext,F255_ext,F256_ext,F257_ext,F258_ext,F259_ext
 ,F260_ext,F261_ext,F262_ext,F263_ext,F264_ext,F265_ext,F266_ext,F267_ext
 ,F268_ext,F269_ext,F270_ext,F271_ext,F272_ext,F273_ext,F274_ext,F275_ext
 ,F276_ext,F277_ext,F278_ext,F279_ext,F280_ext,F281_ext,F282_ext,F283_ext
 ,F284_ext,F285_ext,F286_ext,F287_ext,F288_ext,F289_ext,F290_ext,F291_ext
 ,F292_ext,F293_ext,F294_ext,F295_ext,F296_ext,F297_ext,F298_ext,F299_ext
 ,F300_ext,F301_ext,F302_ext,F303_ext,F304_ext,F305_ext,F306_ext,F307_ext
 ,F308_ext,F309_ext,F310_ext,F311_ext,F312_ext,F313_ext,F314_ext,F315_ext
 ,F316_ext,F317_ext,F318_ext,F319_ext,F320_ext,F321_ext,F322_ext,F323_ext
 ,F324_ext,F325_ext,F326_ext,F327_ext,F328_ext,F329_ext,F330_ext,F331_ext
 ,F332_ext,F333_ext,F334_ext,F335_ext,F336_ext,F337_ext,F338_ext,F339_ext
 ,F340_ext,F341_ext,F342_ext,F343_ext,F344_ext,F345_ext,F346_ext,F347_ext
 ,F348_ext,F349_ext,F350_ext,F351_ext,F352_ext,F353_ext,F354_ext,F355_ext
 ,F356_ext,F357_ext,F358_ext,F359_ext,F360_ext,F361_ext,F362_ext,F363_ext
 ,F364_ext,F365_ext,F366_ext,F367_ext,F368_ext,F369_ext,F370_ext,F371_ext
 ,F372_ext,F373_ext,F374_ext,F375_ext,F376_ext,F377_ext,F378_ext,F379_ext
 ,F380_ext,F381_ext,F382_ext,F383_ext,F384_ext,F385_ext,F386_ext,F387_ext
 ,F388_ext,F389_ext,F390_ext,F391_ext,F392_ext,F393_ext,F394_ext,F395_ext
 ,F396_ext,F397_ext,F398_ext,F399_ext,F400_ext,F401_ext,F402_ext,F403_ext
 ,F404_ext,F405_ext,F406_ext,F407_ext,F408_ext,F409_ext,F410_ext,F411_ext
 ,F412_ext,F413_ext,F414_ext,F415_ext,F416_ext,F417_ext,F418_ext,F419_ext
 ,F420_ext,F421_ext,F422_ext,F423_ext,F424_ext,F425_ext,F426_ext,F427_ext
 ,F428_ext,F429_ext,F430_ext,F431_ext,F432_ext,F433_ext,F434_ext,F435_ext
 ,F436_ext,F437_ext,F438_ext,F439_ext,F440_ext,F441_ext,F442_ext,F443_ext
 ,F444_ext,F445_ext,F446_ext,F447_ext,F448_ext,F449_ext,F450_ext,F451_ext
 ,F452_ext,F453_ext,F454_ext,F455_ext,F456_ext,F457_ext,F458_ext,F459_ext
 ,F460_ext,F461_ext,F462_ext,F463_ext,F464_ext,F465_ext,F466_ext,F467_ext
 ,F468_ext,F469_ext,F470_ext,F471_ext,F472_ext,F473_ext,F474_ext,F475_ext
 ,F476_ext,F477_ext,F478_ext,F479_ext,F480_ext,F481_ext,F482_ext,F483_ext
 ,F484_ext,F485_ext,F486_ext,F487_ext,F488_ext,F489_ext,F490_ext,F491_ext
 ,F492_ext,F493_ext,F494_ext,F495_ext,F496_ext,F497_ext,F498_ext,F499_ext
 ,F500_ext,F501_ext,F502_ext,F503_ext,F504_ext,F505_ext,F506_ext,F507_ext
 ,F508_ext,F509_ext,F510_ext,F511_ext,F512_ext,F513_ext,F514_ext,F515_ext
 ,F516_ext,F517_ext,F518_ext,F519_ext,F520_ext,F521_ext,F522_ext,F523_ext
 ,F524_ext,F525_ext,F526_ext,F527_ext,F528_ext,F529_ext,F530_ext,F531_ext
 ,F532_ext,F533_ext,F534_ext,F535_ext,F536_ext,F537_ext,F538_ext,F539_ext
 ,F540_ext,F541_ext,F542_ext,F543_ext,F544_ext,F545_ext,F546_ext,F547_ext
 ,F548_ext,F549_ext,F550_ext,F551_ext,F552_ext,F553_ext,F554_ext,F555_ext
 ,F556_ext,F557_ext,F558_ext,F559_ext,F560_ext,F561_ext,F562_ext,F563_ext
 ,F564_ext,F565_ext,F566_ext,F567_ext,F568_ext,F569_ext,F570_ext,F571_ext
 ,F572_ext,F573_ext,F574_ext,F575_ext,F576_ext,F577_ext,F578_ext,F579_ext
 ,F580_ext,F581_ext,F582_ext,F583_ext,F584_ext,F585_ext,F586_ext,F587_ext
 ,F588_ext,F589_ext,F590_ext,F591_ext,F592_ext,F593_ext,F594_ext,F595_ext
 ,F596_ext,F597_ext,F598_ext,F599_ext,F600_ext,F601_ext,F602_ext,F603_ext
 ,F604_ext,F605_ext,F606_ext,F607_ext,F608_ext,F609_ext,F610_ext,F611_ext
 ,F612_ext,F613_ext,F614_ext,F615_ext,F616_ext,F617_ext,F618_ext,F619_ext
 ,F620_ext,F621_ext,F622_ext,F623_ext,F624_ext,F625_ext,F626_ext,F627_ext
 ,F628_ext,F629_ext,F630_ext,F631_ext,F632_ext,F633_ext,F634_ext,F635_ext
 ,F636_ext,F637_ext,F638_ext,F639_ext,F640_ext,F641_ext,F642_ext,F643_ext
 ,F644_ext,F645_ext,F646_ext,F647_ext,F648_ext,F649_ext,F650_ext,F651_ext
 ,F652_ext,F653_ext,F654_ext,F655_ext,F656_ext,F657_ext,F658_ext,F659_ext
 ,F660_ext,F661_ext,F662_ext,F663_ext,F664_ext,F665_ext,F666_ext,F667_ext
 ,F668_ext,F669_ext,F670_ext,F671_ext,F672_ext,F673_ext,F674_ext,F675_ext
 ,F676_ext,F677_ext,F678_ext,F679_ext,F680_ext,F681_ext,F682_ext,F683_ext
 ,F684_ext,F685_ext,F686_ext,F687_ext,F688_ext,F689_ext,F690_ext,F691_ext
 ,F692_ext,F693_ext,F694_ext,F695_ext,F696_ext,F697_ext,F698_ext,F699_ext
 ,F700_ext,F701_ext,F702_ext,F703_ext,F704_ext,F705_ext,F706_ext,F707_ext
 ,F708_ext,F709_ext,F710_ext,F711_ext,F712_ext,F713_ext,F714_ext,F715_ext
 ,F716_ext,F717_ext,F718_ext,F719_ext,F720_ext,F721_ext,F722_ext,F723_ext
 ,F724_ext,F725_ext,F726_ext,F727_ext,F728_ext,F729_ext,F730_ext,F731_ext
 ,F732_ext,F733_ext,F734_ext,F735_ext,F736_ext,F737_ext,F738_ext,F739_ext
 ,F740_ext,F741_ext,F742_ext,F743_ext,F744_ext,F745_ext,F746_ext,F747_ext
 ,F748_ext,F749_ext,F750_ext,F751_ext,F752_ext,F753_ext,F754_ext,F755_ext
 ,F756_ext,F757_ext,F758_ext,F759_ext,F760_ext,F761_ext,F762_ext,F763_ext
 ,F764_ext,F765_ext,F766_ext,F767_ext,F768_ext,F769_ext,F770_ext,F771_ext
 ,F772_ext,F773_ext,F774_ext,F775_ext,F776_ext,F777_ext,F778_ext,F779_ext
 ,F780_ext,F781_ext,F782_ext,F783_ext,F784_ext,F785_ext,F786_ext,F787_ext
 ,F788_ext,F789_ext,F790_ext,F791_ext,F792_ext,F793_ext,F794_ext,F795_ext
 ,F796_ext,F797_ext,F798_ext,F799_ext,F800_ext,F801_ext,F802_ext,F803_ext
 ,F804_ext,F805_ext,F806_ext,F807_ext,F808_ext,F809_ext,F810_ext,F811_ext
 ,F812_ext,F813_ext,F814_ext,F815_ext,F816_ext,F817_ext,F818_ext,F819_ext
 ,F820_ext,F821_ext,F822_ext,F823_ext,F824_ext,F825_ext,F826_ext,F827_ext
 ,F828_ext,F829_ext,F830_ext,F831_ext,F832_ext,F833_ext,F834_ext,F835_ext
 ,F836_ext,F837_ext,F838_ext,F839_ext,F840_ext,F841_ext,F842_ext,F843_ext
 ,F844_ext,F845_ext,F846_ext,F847_ext,F848_ext,F849_ext,F850_ext,F851_ext
 ,F852_ext,F853_ext,F854_ext,F855_ext,F856_ext,F857_ext,F858_ext,F859_ext
 ,F860_ext,F861_ext,F862_ext,F863_ext,F864_ext,F865_ext,F866_ext,F867_ext
 ,F868_ext,F869_ext,F870_ext,F871_ext,F872_ext,F873_ext,F874_ext,F875_ext
 ,F876_ext,F877_ext,F878_ext,F879_ext,F880_ext,F881_ext,F882_ext,F883_ext
 ,F884_ext,F885_ext,F886_ext,F887_ext,F888_ext,F889_ext,F890_ext,F891_ext
 ,F892_ext,F893_ext,F894_ext,F895_ext,F896_ext,F897_ext,F898_ext,F899_ext
 ,F900_ext,F901_ext,F902_ext,F903_ext,F904_ext,F905_ext,F906_ext,F907_ext
 ,F908_ext,F909_ext,F910_ext,F911_ext,F912_ext,F913_ext,F914_ext,F915_ext
 ,F916_ext,F917_ext,F918_ext,F919_ext,F920_ext,F921_ext,F922_ext,F923_ext
 ,F924_ext,F925_ext,F926_ext,F927_ext,F928_ext,F929_ext,F930_ext,F931_ext
 ,F932_ext,F933_ext,F934_ext,F935_ext,F936_ext,F937_ext,F938_ext,F939_ext
 ,F940_ext,F941_ext,F942_ext,F943_ext,F944_ext,F945_ext,F946_ext,F947_ext
 ,F948_ext,F949_ext,F950_ext,F951_ext,F952_ext,F953_ext,F954_ext,F955_ext
 ,F956_ext,F957_ext,F958_ext,F959_ext,F960_ext,F961_ext,F962_ext,F963_ext
 ,F964_ext,F965_ext,F966_ext,F967_ext,F968_ext,F969_ext,F970_ext,F971_ext
 ,F972_ext,F973_ext,F974_ext,F975_ext,F976_ext,F977_ext,F978_ext,F979_ext
 ,F980_ext,F981_ext,F982_ext,F983_ext,F984_ext,F985_ext,F986_ext,F987_ext
 ,F988_ext,F989_ext,F990_ext,F991_ext,F992_ext,F993_ext,F994_ext,F995_ext
 ,F996_ext,F997_ext,F998_ext,F999_ext,F1000_ext,F1001_ext,F1002_ext
 ,F1003_ext,F1004_ext,F1005_ext,F1006_ext,F1007_ext,F1008_ext,F1009_ext
 ,F1010_ext,F1011_ext,F1012_ext,F1013_ext,F1014_ext,F1015_ext,F1016_ext
 ,F1017_ext,F1018_ext,F1019_ext,F1020_ext,F1021_ext,F1022_ext,F1023_ext
 ,F1024_ext,F1025_ext,F1026_ext,F1027_ext,F1028_ext,F1029_ext,F1030_ext
 ,F1031_ext,F1032_ext,F1033_ext,F1034_ext,F1035_ext,F1036_ext,F1037_ext
 ,F1038_ext,F1039_ext,F1040_ext,F1041_ext,F1042_ext,F1043_ext,F1044_ext
 ,F1045_ext,F1046_ext,F1047_ext,F1048_ext,F1049_ext,F1050_ext,F1051_ext
 ,F1052_ext,F1053_ext,F1054_ext,F1055_ext,F1056_ext,F1057_ext,F1058_ext
 ,F1059_ext,F1060_ext,F1061_ext,F1062_ext,F1063_ext,F1064_ext,F1065_ext
 ,F1066_ext,F1067_ext,F1068_ext,F1069_ext,F1070_ext,F1071_ext,F1072_ext
 ,F1073_ext,F1074_ext,F1075_ext,F1076_ext,F1077_ext,F1078_ext,F1079_ext
 ,F1080_ext,F1081_ext,F1082_ext,F1083_ext,F1084_ext,F1085_ext,F1086_ext
 ,F1087_ext,F1088_ext,F1089_ext,F1090_ext,F1091_ext,F1092_ext,F1093_ext
 ,F1094_ext,F1095_ext,F1096_ext,F1097_ext,F1098_ext,F1099_ext,F1100_ext
 ,F1101_ext,F1102_ext,F1103_ext,F1104_ext,F1105_ext,F1106_ext,F1107_ext
 ,F1108_ext,F1109_ext,F1110_ext,F1111_ext,F1112_ext,F1113_ext,F1114_ext
 ,F1115_ext,F1116_ext,F1117_ext,F1118_ext,F1119_ext,F1120_ext,F1121_ext
 ,F1122_ext,F1123_ext,F1124_ext,F1125_ext,F1126_ext,F1127_ext,F1128_ext
 ,F1129_ext,F1130_ext,F1131_ext,F1132_ext,F1133_ext,F1134_ext,F1135_ext
 ,F1136_ext,F1137_ext,F1138_ext,F1139_ext,F1140_ext,F1141_ext,F1142_ext
 ,F1143_ext,F1144_ext,F1145_ext;
static FNN *Farr[1145]={&F1_ext,&F2_ext,&F3_ext,&F4_ext,&F5_ext,&F6_ext
 ,&F7_ext,&F8_ext,&F9_ext,&F10_ext,&F11_ext,&F12_ext,&F13_ext,&F14_ext
 ,&F15_ext,&F16_ext,&F17_ext,&F18_ext,&F19_ext,&F20_ext,&F21_ext,&F22_ext
 ,&F23_ext,&F24_ext,&F25_ext,&F26_ext,&F27_ext,&F28_ext,&F29_ext,&F30_ext
 ,&F31_ext,&F32_ext,&F33_ext,&F34_ext,&F35_ext,&F36_ext,&F37_ext,&F38_ext
 ,&F39_ext,&F40_ext,&F41_ext,&F42_ext,&F43_ext,&F44_ext,&F45_ext,&F46_ext
 ,&F47_ext,&F48_ext,&F49_ext,&F50_ext,&F51_ext,&F52_ext,&F53_ext,&F54_ext
 ,&F55_ext,&F56_ext,&F57_ext,&F58_ext,&F59_ext,&F60_ext,&F61_ext,&F62_ext
 ,&F63_ext,&F64_ext,&F65_ext,&F66_ext,&F67_ext,&F68_ext,&F69_ext,&F70_ext
 ,&F71_ext,&F72_ext,&F73_ext,&F74_ext,&F75_ext,&F76_ext,&F77_ext,&F78_ext
 ,&F79_ext,&F80_ext,&F81_ext,&F82_ext,&F83_ext,&F84_ext,&F85_ext,&F86_ext
 ,&F87_ext,&F88_ext,&F89_ext,&F90_ext,&F91_ext,&F92_ext,&F93_ext,&F94_ext
 ,&F95_ext,&F96_ext,&F97_ext,&F98_ext,&F99_ext,&F100_ext,&F101_ext,&F102_ext
 ,&F103_ext,&F104_ext,&F105_ext,&F106_ext,&F107_ext,&F108_ext,&F109_ext
 ,&F110_ext,&F111_ext,&F112_ext,&F113_ext,&F114_ext,&F115_ext,&F116_ext
 ,&F117_ext,&F118_ext,&F119_ext,&F120_ext,&F121_ext,&F122_ext,&F123_ext
 ,&F124_ext,&F125_ext,&F126_ext,&F127_ext,&F128_ext,&F129_ext,&F130_ext
 ,&F131_ext,&F132_ext,&F133_ext,&F134_ext,&F135_ext,&F136_ext,&F137_ext
 ,&F138_ext,&F139_ext,&F140_ext,&F141_ext,&F142_ext,&F143_ext,&F144_ext
 ,&F145_ext,&F146_ext,&F147_ext,&F148_ext,&F149_ext,&F150_ext,&F151_ext
 ,&F152_ext,&F153_ext,&F154_ext,&F155_ext,&F156_ext,&F157_ext,&F158_ext
 ,&F159_ext,&F160_ext,&F161_ext,&F162_ext,&F163_ext,&F164_ext,&F165_ext
 ,&F166_ext,&F167_ext,&F168_ext,&F169_ext,&F170_ext,&F171_ext,&F172_ext
 ,&F173_ext,&F174_ext,&F175_ext,&F176_ext,&F177_ext,&F178_ext,&F179_ext
 ,&F180_ext,&F181_ext,&F182_ext,&F183_ext,&F184_ext,&F185_ext,&F186_ext
 ,&F187_ext,&F188_ext,&F189_ext,&F190_ext,&F191_ext,&F192_ext,&F193_ext
 ,&F194_ext,&F195_ext,&F196_ext,&F197_ext,&F198_ext,&F199_ext,&F200_ext
 ,&F201_ext,&F202_ext,&F203_ext,&F204_ext,&F205_ext,&F206_ext,&F207_ext
 ,&F208_ext,&F209_ext,&F210_ext,&F211_ext,&F212_ext,&F213_ext,&F214_ext
 ,&F215_ext,&F216_ext,&F217_ext,&F218_ext,&F219_ext,&F220_ext,&F221_ext
 ,&F222_ext,&F223_ext,&F224_ext,&F225_ext,&F226_ext,&F227_ext,&F228_ext
 ,&F229_ext,&F230_ext,&F231_ext,&F232_ext,&F233_ext,&F234_ext,&F235_ext
 ,&F236_ext,&F237_ext,&F238_ext,&F239_ext,&F240_ext,&F241_ext,&F242_ext
 ,&F243_ext,&F244_ext,&F245_ext,&F246_ext,&F247_ext,&F248_ext,&F249_ext
 ,&F250_ext,&F251_ext,&F252_ext,&F253_ext,&F254_ext,&F255_ext,&F256_ext
 ,&F257_ext,&F258_ext,&F259_ext,&F260_ext,&F261_ext,&F262_ext,&F263_ext
 ,&F264_ext,&F265_ext,&F266_ext,&F267_ext,&F268_ext,&F269_ext,&F270_ext
 ,&F271_ext,&F272_ext,&F273_ext,&F274_ext,&F275_ext,&F276_ext,&F277_ext
 ,&F278_ext,&F279_ext,&F280_ext,&F281_ext,&F282_ext,&F283_ext,&F284_ext
 ,&F285_ext,&F286_ext,&F287_ext,&F288_ext,&F289_ext,&F290_ext,&F291_ext
 ,&F292_ext,&F293_ext,&F294_ext,&F295_ext,&F296_ext,&F297_ext,&F298_ext
 ,&F299_ext,&F300_ext,&F301_ext,&F302_ext,&F303_ext,&F304_ext,&F305_ext
 ,&F306_ext,&F307_ext,&F308_ext,&F309_ext,&F310_ext,&F311_ext,&F312_ext
 ,&F313_ext,&F314_ext,&F315_ext,&F316_ext,&F317_ext,&F318_ext,&F319_ext
 ,&F320_ext,&F321_ext,&F322_ext,&F323_ext,&F324_ext,&F325_ext,&F326_ext
 ,&F327_ext,&F328_ext,&F329_ext,&F330_ext,&F331_ext,&F332_ext,&F333_ext
 ,&F334_ext,&F335_ext,&F336_ext,&F337_ext,&F338_ext,&F339_ext,&F340_ext
 ,&F341_ext,&F342_ext,&F343_ext,&F344_ext,&F345_ext,&F346_ext,&F347_ext
 ,&F348_ext,&F349_ext,&F350_ext,&F351_ext,&F352_ext,&F353_ext,&F354_ext
 ,&F355_ext,&F356_ext,&F357_ext,&F358_ext,&F359_ext,&F360_ext,&F361_ext
 ,&F362_ext,&F363_ext,&F364_ext,&F365_ext,&F366_ext,&F367_ext,&F368_ext
 ,&F369_ext,&F370_ext,&F371_ext,&F372_ext,&F373_ext,&F374_ext,&F375_ext
 ,&F376_ext,&F377_ext,&F378_ext,&F379_ext,&F380_ext,&F381_ext,&F382_ext
 ,&F383_ext,&F384_ext,&F385_ext,&F386_ext,&F387_ext,&F388_ext,&F389_ext
 ,&F390_ext,&F391_ext,&F392_ext,&F393_ext,&F394_ext,&F395_ext,&F396_ext
 ,&F397_ext,&F398_ext,&F399_ext,&F400_ext,&F401_ext,&F402_ext,&F403_ext
 ,&F404_ext,&F405_ext,&F406_ext,&F407_ext,&F408_ext,&F409_ext,&F410_ext
 ,&F411_ext,&F412_ext,&F413_ext,&F414_ext,&F415_ext,&F416_ext,&F417_ext
 ,&F418_ext,&F419_ext,&F420_ext,&F421_ext,&F422_ext,&F423_ext,&F424_ext
 ,&F425_ext,&F426_ext,&F427_ext,&F428_ext,&F429_ext,&F430_ext,&F431_ext
 ,&F432_ext,&F433_ext,&F434_ext,&F435_ext,&F436_ext,&F437_ext,&F438_ext
 ,&F439_ext,&F440_ext,&F441_ext,&F442_ext,&F443_ext,&F444_ext,&F445_ext
 ,&F446_ext,&F447_ext,&F448_ext,&F449_ext,&F450_ext,&F451_ext,&F452_ext
 ,&F453_ext,&F454_ext,&F455_ext,&F456_ext,&F457_ext,&F458_ext,&F459_ext
 ,&F460_ext,&F461_ext,&F462_ext,&F463_ext,&F464_ext,&F465_ext,&F466_ext
 ,&F467_ext,&F468_ext,&F469_ext,&F470_ext,&F471_ext,&F472_ext,&F473_ext
 ,&F474_ext,&F475_ext,&F476_ext,&F477_ext,&F478_ext,&F479_ext,&F480_ext
 ,&F481_ext,&F482_ext,&F483_ext,&F484_ext,&F485_ext,&F486_ext,&F487_ext
 ,&F488_ext,&F489_ext,&F490_ext,&F491_ext,&F492_ext,&F493_ext,&F494_ext
 ,&F495_ext,&F496_ext,&F497_ext,&F498_ext,&F499_ext,&F500_ext,&F501_ext
 ,&F502_ext,&F503_ext,&F504_ext,&F505_ext,&F506_ext,&F507_ext,&F508_ext
 ,&F509_ext,&F510_ext,&F511_ext,&F512_ext,&F513_ext,&F514_ext,&F515_ext
 ,&F516_ext,&F517_ext,&F518_ext,&F519_ext,&F520_ext,&F521_ext,&F522_ext
 ,&F523_ext,&F524_ext,&F525_ext,&F526_ext,&F527_ext,&F528_ext,&F529_ext
 ,&F530_ext,&F531_ext,&F532_ext,&F533_ext,&F534_ext,&F535_ext,&F536_ext
 ,&F537_ext,&F538_ext,&F539_ext,&F540_ext,&F541_ext,&F542_ext,&F543_ext
 ,&F544_ext,&F545_ext,&F546_ext,&F547_ext,&F548_ext,&F549_ext,&F550_ext
 ,&F551_ext,&F552_ext,&F553_ext,&F554_ext,&F555_ext,&F556_ext,&F557_ext
 ,&F558_ext,&F559_ext,&F560_ext,&F561_ext,&F562_ext,&F563_ext,&F564_ext
 ,&F565_ext,&F566_ext,&F567_ext,&F568_ext,&F569_ext,&F570_ext,&F571_ext
 ,&F572_ext,&F573_ext,&F574_ext,&F575_ext,&F576_ext,&F577_ext,&F578_ext
 ,&F579_ext,&F580_ext,&F581_ext,&F582_ext,&F583_ext,&F584_ext,&F585_ext
 ,&F586_ext,&F587_ext,&F588_ext,&F589_ext,&F590_ext,&F591_ext,&F592_ext
 ,&F593_ext,&F594_ext,&F595_ext,&F596_ext,&F597_ext,&F598_ext,&F599_ext
 ,&F600_ext,&F601_ext,&F602_ext,&F603_ext,&F604_ext,&F605_ext,&F606_ext
 ,&F607_ext,&F608_ext,&F609_ext,&F610_ext,&F611_ext,&F612_ext,&F613_ext
 ,&F614_ext,&F615_ext,&F616_ext,&F617_ext,&F618_ext,&F619_ext,&F620_ext
 ,&F621_ext,&F622_ext,&F623_ext,&F624_ext,&F625_ext,&F626_ext,&F627_ext
 ,&F628_ext,&F629_ext,&F630_ext,&F631_ext,&F632_ext,&F633_ext,&F634_ext
 ,&F635_ext,&F636_ext,&F637_ext,&F638_ext,&F639_ext,&F640_ext,&F641_ext
 ,&F642_ext,&F643_ext,&F644_ext,&F645_ext,&F646_ext,&F647_ext,&F648_ext
 ,&F649_ext,&F650_ext,&F651_ext,&F652_ext,&F653_ext,&F654_ext,&F655_ext
 ,&F656_ext,&F657_ext,&F658_ext,&F659_ext,&F660_ext,&F661_ext,&F662_ext
 ,&F663_ext,&F664_ext,&F665_ext,&F666_ext,&F667_ext,&F668_ext,&F669_ext
 ,&F670_ext,&F671_ext,&F672_ext,&F673_ext,&F674_ext,&F675_ext,&F676_ext
 ,&F677_ext,&F678_ext,&F679_ext,&F680_ext,&F681_ext,&F682_ext,&F683_ext
 ,&F684_ext,&F685_ext,&F686_ext,&F687_ext,&F688_ext,&F689_ext,&F690_ext
 ,&F691_ext,&F692_ext,&F693_ext,&F694_ext,&F695_ext,&F696_ext,&F697_ext
 ,&F698_ext,&F699_ext,&F700_ext,&F701_ext,&F702_ext,&F703_ext,&F704_ext
 ,&F705_ext,&F706_ext,&F707_ext,&F708_ext,&F709_ext,&F710_ext,&F711_ext
 ,&F712_ext,&F713_ext,&F714_ext,&F715_ext,&F716_ext,&F717_ext,&F718_ext
 ,&F719_ext,&F720_ext,&F721_ext,&F722_ext,&F723_ext,&F724_ext,&F725_ext
 ,&F726_ext,&F727_ext,&F728_ext,&F729_ext,&F730_ext,&F731_ext,&F732_ext
 ,&F733_ext,&F734_ext,&F735_ext,&F736_ext,&F737_ext,&F738_ext,&F739_ext
 ,&F740_ext,&F741_ext,&F742_ext,&F743_ext,&F744_ext,&F745_ext,&F746_ext
 ,&F747_ext,&F748_ext,&F749_ext,&F750_ext,&F751_ext,&F752_ext,&F753_ext
 ,&F754_ext,&F755_ext,&F756_ext,&F757_ext,&F758_ext,&F759_ext,&F760_ext
 ,&F761_ext,&F762_ext,&F763_ext,&F764_ext,&F765_ext,&F766_ext,&F767_ext
 ,&F768_ext,&F769_ext,&F770_ext,&F771_ext,&F772_ext,&F773_ext,&F774_ext
 ,&F775_ext,&F776_ext,&F777_ext,&F778_ext,&F779_ext,&F780_ext,&F781_ext
 ,&F782_ext,&F783_ext,&F784_ext,&F785_ext,&F786_ext,&F787_ext,&F788_ext
 ,&F789_ext,&F790_ext,&F791_ext,&F792_ext,&F793_ext,&F794_ext,&F795_ext
 ,&F796_ext,&F797_ext,&F798_ext,&F799_ext,&F800_ext,&F801_ext,&F802_ext
 ,&F803_ext,&F804_ext,&F805_ext,&F806_ext,&F807_ext,&F808_ext,&F809_ext
 ,&F810_ext,&F811_ext,&F812_ext,&F813_ext,&F814_ext,&F815_ext,&F816_ext
 ,&F817_ext,&F818_ext,&F819_ext,&F820_ext,&F821_ext,&F822_ext,&F823_ext
 ,&F824_ext,&F825_ext,&F826_ext,&F827_ext,&F828_ext,&F829_ext,&F830_ext
 ,&F831_ext,&F832_ext,&F833_ext,&F834_ext,&F835_ext,&F836_ext,&F837_ext
 ,&F838_ext,&F839_ext,&F840_ext,&F841_ext,&F842_ext,&F843_ext,&F844_ext
 ,&F845_ext,&F846_ext,&F847_ext,&F848_ext,&F849_ext,&F850_ext,&F851_ext
 ,&F852_ext,&F853_ext,&F854_ext,&F855_ext,&F856_ext,&F857_ext,&F858_ext
 ,&F859_ext,&F860_ext,&F861_ext,&F862_ext,&F863_ext,&F864_ext,&F865_ext
 ,&F866_ext,&F867_ext,&F868_ext,&F869_ext,&F870_ext,&F871_ext,&F872_ext
 ,&F873_ext,&F874_ext,&F875_ext,&F876_ext,&F877_ext,&F878_ext,&F879_ext
 ,&F880_ext,&F881_ext,&F882_ext,&F883_ext,&F884_ext,&F885_ext,&F886_ext
 ,&F887_ext,&F888_ext,&F889_ext,&F890_ext,&F891_ext,&F892_ext,&F893_ext
 ,&F894_ext,&F895_ext,&F896_ext,&F897_ext,&F898_ext,&F899_ext,&F900_ext
 ,&F901_ext,&F902_ext,&F903_ext,&F904_ext,&F905_ext,&F906_ext,&F907_ext
 ,&F908_ext,&F909_ext,&F910_ext,&F911_ext,&F912_ext,&F913_ext,&F914_ext
 ,&F915_ext,&F916_ext,&F917_ext,&F918_ext,&F919_ext,&F920_ext,&F921_ext
 ,&F922_ext,&F923_ext,&F924_ext,&F925_ext,&F926_ext,&F927_ext,&F928_ext
 ,&F929_ext,&F930_ext,&F931_ext,&F932_ext,&F933_ext,&F934_ext,&F935_ext
 ,&F936_ext,&F937_ext,&F938_ext,&F939_ext,&F940_ext,&F941_ext,&F942_ext
 ,&F943_ext,&F944_ext,&F945_ext,&F946_ext,&F947_ext,&F948_ext,&F949_ext
 ,&F950_ext,&F951_ext,&F952_ext,&F953_ext,&F954_ext,&F955_ext,&F956_ext
 ,&F957_ext,&F958_ext,&F959_ext,&F960_ext,&F961_ext,&F962_ext,&F963_ext
 ,&F964_ext,&F965_ext,&F966_ext,&F967_ext,&F968_ext,&F969_ext,&F970_ext
 ,&F971_ext,&F972_ext,&F973_ext,&F974_ext,&F975_ext,&F976_ext,&F977_ext
 ,&F978_ext,&F979_ext,&F980_ext,&F981_ext,&F982_ext,&F983_ext,&F984_ext
 ,&F985_ext,&F986_ext,&F987_ext,&F988_ext,&F989_ext,&F990_ext,&F991_ext
 ,&F992_ext,&F993_ext,&F994_ext,&F995_ext,&F996_ext,&F997_ext,&F998_ext
 ,&F999_ext,&F1000_ext,&F1001_ext,&F1002_ext,&F1003_ext,&F1004_ext
 ,&F1005_ext,&F1006_ext,&F1007_ext,&F1008_ext,&F1009_ext,&F1010_ext
 ,&F1011_ext,&F1012_ext,&F1013_ext,&F1014_ext,&F1015_ext,&F1016_ext
 ,&F1017_ext,&F1018_ext,&F1019_ext,&F1020_ext,&F1021_ext,&F1022_ext
 ,&F1023_ext,&F1024_ext,&F1025_ext,&F1026_ext,&F1027_ext,&F1028_ext
 ,&F1029_ext,&F1030_ext,&F1031_ext,&F1032_ext,&F1033_ext,&F1034_ext
 ,&F1035_ext,&F1036_ext,&F1037_ext,&F1038_ext,&F1039_ext,&F1040_ext
 ,&F1041_ext,&F1042_ext,&F1043_ext,&F1044_ext,&F1045_ext,&F1046_ext
 ,&F1047_ext,&F1048_ext,&F1049_ext,&F1050_ext,&F1051_ext,&F1052_ext
 ,&F1053_ext,&F1054_ext,&F1055_ext,&F1056_ext,&F1057_ext,&F1058_ext
 ,&F1059_ext,&F1060_ext,&F1061_ext,&F1062_ext,&F1063_ext,&F1064_ext
 ,&F1065_ext,&F1066_ext,&F1067_ext,&F1068_ext,&F1069_ext,&F1070_ext
 ,&F1071_ext,&F1072_ext,&F1073_ext,&F1074_ext,&F1075_ext,&F1076_ext
 ,&F1077_ext,&F1078_ext,&F1079_ext,&F1080_ext,&F1081_ext,&F1082_ext
 ,&F1083_ext,&F1084_ext,&F1085_ext,&F1086_ext,&F1087_ext,&F1088_ext
 ,&F1089_ext,&F1090_ext,&F1091_ext,&F1092_ext,&F1093_ext,&F1094_ext
 ,&F1095_ext,&F1096_ext,&F1097_ext,&F1098_ext,&F1099_ext,&F1100_ext
 ,&F1101_ext,&F1102_ext,&F1103_ext,&F1104_ext,&F1105_ext,&F1106_ext
 ,&F1107_ext,&F1108_ext,&F1109_ext,&F1110_ext,&F1111_ext,&F1112_ext
 ,&F1113_ext,&F1114_ext,&F1115_ext,&F1116_ext,&F1117_ext,&F1118_ext
 ,&F1119_ext,&F1120_ext,&F1121_ext,&F1122_ext,&F1123_ext,&F1124_ext
 ,&F1125_ext,&F1126_ext,&F1127_ext,&F1128_ext,&F1129_ext,&F1130_ext
 ,&F1131_ext,&F1132_ext,&F1133_ext,&F1134_ext,&F1135_ext,&F1136_ext
 ,&F1137_ext,&F1138_ext,&F1139_ext,&F1140_ext,&F1141_ext,&F1142_ext
 ,&F1143_ext,&F1144_ext,&F1145_ext};
extern DNN S1_ext;
REAL S1_ext(double GG, REAL * momenta,REAL*cb_coeff,int * err)
{REAL  ans=0;
REAL DP[10];
REAL* V=va_ext;
REAL mass[23],width[23];
char * Qtxt[23];
REAL Q0[23]; COMPLEX Q1[23]; REAL Q2[23];
  if(!momenta) {int i; for(i=0;i<1145;i++) Farr[i](
 GG,NULL,NULL,NULL,NULL,NULL); return 0;}
width[22]=0.; mass[22]=V[6];  Qtxt[22]="\1\3";
width[21]=0.; mass[21]=V[6];  Qtxt[21]="\2\3";
width[8]=V[22]; mass[8]=V[6];  Qtxt[8]="\3\4";
width[7]=V[22]; mass[7]=V[6];  Qtxt[7]="\3\5";
width[20]=0.; mass[20]=V[5];  Qtxt[20]="\1\4";
width[19]=0.; mass[19]=V[5];  Qtxt[19]="\1\5";
width[18]=0.; mass[18]=V[5];  Qtxt[18]="\1\2";
width[17]=0.; mass[17]=V[4];  Qtxt[17]="\1\3";
width[16]=0.; mass[16]=V[4];  Qtxt[16]="\2\3";
width[6]=V[21]; mass[6]=V[4];  Qtxt[6]="\3\4";
width[5]=V[21]; mass[5]=V[4];  Qtxt[5]="\3\5";
width[15]=0.; mass[15]=V[1];  Qtxt[15]="\1\3";
width[14]=0.; mass[14]=V[1];  Qtxt[14]="\2\3";
width[4]=V[20]; mass[4]=V[1];  Qtxt[4]="\3\4";
width[3]=V[20]; mass[3]=V[1];  Qtxt[3]="\3\5";
width[13]=0.; mass[13]=V[2];  Qtxt[13]="\1\3";
width[12]=0.; mass[12]=V[5];  Qtxt[12]="\4\5";
width[11]=0.; mass[11]=V[2];  Qtxt[11]="\2\3";
width[2]=V[19]; mass[2]=V[2];  Qtxt[2]="\3\4";
width[10]=0.; mass[10]=V[5];  Qtxt[10]="\2\5";
width[1]=V[19]; mass[1]=V[2];  Qtxt[1]="\3\5";
width[9]=0.; mass[9]=V[5];  Qtxt[9]="\2\4";
*err=*err|prepDen(22,nin_ext,BWrange_ext*
 BWrange_ext,mass,width,Qtxt,momenta,Q0,Q1,Q2);
sprod_(5, momenta, DP);
{int i; for(i=0;i<1145;i++) 
{ REAL r=Farr[i](GG,DP,Q0,Q1,Q2,cb_coeff);
  if(r>Fmax) Fmax=r;
  ans+=r;
}}
return ans;
}
