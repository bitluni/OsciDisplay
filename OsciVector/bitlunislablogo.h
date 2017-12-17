const int vertexCount = 668;
const int edgeCount = 2004;
const float vertices[][3] = {
-0.4318, -0.4905, -0.0728, -0.4393, -0.4927, -0.0347, -0.4740, -0.4741, -0.0347, -0.4535, -0.4536, -0.0755, -0.4908, -0.4318, -0.0728, -0.4931, -0.4394, -0.0347, -0.4931, -0.3820, -0.0745, -0.5000, -0.3820, -0.0347, -0.5000, -0.3125, -0.0347, -0.4931, -0.3125, -0.0745, -0.4514, -0.3125, -0.0796, -0.4514, -0.3820, -0.0796, -0.3820, -0.4928, -0.0745, -0.3125, -0.4928, -0.0745, -0.3125, -0.4995, -0.0347, -0.3820, -0.4994, -0.0347, 
-0.3820, -0.4514, -0.0796, -0.3125, -0.4514, -0.0796, -0.3820, -0.3820, -0.0796, -0.3820, -0.3125, -0.0796, -0.3125, -0.3125, -0.0796, -0.3125, -0.3820, -0.0796, -0.4930, -0.2431, -0.0745, -0.4999, -0.2431, -0.0347, -0.4998, -0.1736, -0.0347, -0.4930, -0.1736, -0.0745, -0.4514, -0.1736, -0.0796, -0.4514, -0.2431, -0.0796, -0.4930, -0.1042, -0.0745, -0.4998, -0.1042, -0.0347, -0.4997, -0.0347, -0.0347, -0.4929, -0.0347, -0.0745, 
-0.4514, -0.0347, -0.0796, -0.4514, -0.1042, -0.0796, -0.3180, -0.1736, -0.0745, -0.2887, -0.1736, -0.0347, -0.2828, -0.2277, -0.0347, -0.3076, -0.2439, -0.0755, -0.3820, -0.2431, -0.0796, -0.3820, -0.1736, -0.0796, -0.3186, -0.0347, -0.0745, -0.2899, -0.0347, -0.0347, -0.2897, -0.1042, -0.0347, -0.3185, -0.1042, -0.0745, -0.3820, -0.1042, -0.0796, -0.3820, -0.0347, -0.0796, -0.2431, -0.4928, -0.0745, -0.1736, -0.4928, -0.0745, 
-0.1736, -0.4995, -0.0347, -0.2431, -0.4995, -0.0347, -0.2431, -0.4514, -0.0796, -0.1736, -0.4514, -0.0796, -0.2585, -0.3125, -0.0745, -0.2392, -0.3125, -0.0347, -0.2110, -0.3496, -0.0347, -0.2372, -0.3760, -0.0755, -0.1736, -0.3742, -0.0347, -0.1736, -0.3955, -0.0745, -0.1042, -0.4928, -0.0745, -0.0347, -0.4928, -0.0745, -0.0347, -0.4994, -0.0347, -0.1042, -0.4994, -0.0347, -0.1042, -0.4514, -0.0796, -0.0347, -0.4514, -0.0796, 
-0.1042, -0.4055, -0.0347, -0.0347, -0.4150, -0.0347, -0.0347, -0.4158, -0.0745, -0.1042, -0.4111, -0.0745, -0.0842, -0.2205, -0.0728, -0.0915, -0.2265, -0.0347, -0.1191, -0.1736, -0.0347, -0.0943, -0.1736, -0.0745, -0.0347, -0.2276, -0.0745, -0.0347, -0.2468, -0.0347, -0.0347, -0.1736, -0.0796, -0.0970, -0.1110, -0.0347, -0.0347, -0.0832, -0.0347, -0.0347, -0.1111, -0.0745, -0.0878, -0.1203, -0.0728, -0.2713, -0.2624, -0.0347, 
-0.2735, -0.2675, -0.0728, -0.4393, -0.4927, 0.0347, -0.4318, -0.4905, 0.0728, -0.4535, -0.4536, 0.0755, -0.4740, -0.4741, 0.0347, -0.4931, -0.4394, 0.0347, -0.4908, -0.4318, 0.0728, -0.5000, -0.3820, 0.0347, -0.4931, -0.3820, 0.0745, -0.4931, -0.3125, 0.0745, -0.5000, -0.3125, 0.0347, -0.4514, -0.3820, 0.0796, -0.4514, -0.3125, 0.0796, -0.3820, -0.4994, 0.0347, -0.3125, -0.4995, 0.0347, -0.3125, -0.4928, 0.0745, 
-0.3820, -0.4928, 0.0745, -0.3125, -0.4514, 0.0796, -0.3820, -0.4514, 0.0796, -0.3125, -0.3820, 0.0796, -0.3125, -0.3125, 0.0796, -0.3820, -0.3125, 0.0796, -0.3820, -0.3820, 0.0796, -0.4999, -0.2431, 0.0347, -0.4930, -0.2431, 0.0745, -0.4930, -0.1736, 0.0745, -0.4998, -0.1736, 0.0347, -0.4514, -0.2431, 0.0796, -0.4514, -0.1736, 0.0796, -0.4998, -0.1042, 0.0347, -0.4930, -0.1042, 0.0745, -0.4929, -0.0347, 0.0745, 
-0.4997, -0.0347, 0.0347, -0.4514, -0.1042, 0.0796, -0.4514, -0.0347, 0.0796, -0.2887, -0.1736, 0.0347, -0.3180, -0.1736, 0.0745, -0.3076, -0.2439, 0.0755, -0.2828, -0.2277, 0.0347, -0.3820, -0.1736, 0.0796, -0.3820, -0.2431, 0.0796, -0.2899, -0.0347, 0.0347, -0.3186, -0.0347, 0.0745, -0.3185, -0.1042, 0.0745, -0.2897, -0.1042, 0.0347, -0.3820, -0.0347, 0.0796, -0.3820, -0.1042, 0.0796, -0.2431, -0.4995, 0.0347, 
-0.1736, -0.4995, 0.0347, -0.1736, -0.4928, 0.0745, -0.2431, -0.4928, 0.0745, -0.1736, -0.4514, 0.0796, -0.2431, -0.4514, 0.0796, -0.2392, -0.3125, 0.0347, -0.2585, -0.3125, 0.0745, -0.2372, -0.3760, 0.0755, -0.2110, -0.3496, 0.0347, -0.1736, -0.3955, 0.0745, -0.1736, -0.3742, 0.0347, -0.1042, -0.4994, 0.0347, -0.0347, -0.4994, 0.0347, -0.0347, -0.4928, 0.0745, -0.1042, -0.4928, 0.0745, -0.0347, -0.4514, 0.0796, 
-0.1042, -0.4514, 0.0796, -0.1042, -0.4111, 0.0745, -0.0347, -0.4158, 0.0745, -0.0347, -0.4150, 0.0347, -0.1042, -0.4055, 0.0347, -0.0915, -0.2265, 0.0347, -0.0842, -0.2205, 0.0728, -0.0943, -0.1736, 0.0745, -0.1191, -0.1736, 0.0347, -0.0347, -0.2468, 0.0347, -0.0347, -0.2276, 0.0745, -0.0347, -0.1736, 0.0796, -0.0878, -0.1203, 0.0728, -0.0347, -0.1111, 0.0745, -0.0347, -0.0832, 0.0347, -0.0970, -0.1110, 0.0347, 
-0.2735, -0.2675, 0.0728, -0.2713, -0.2624, 0.0347, -0.4929, 0.0347, -0.0745, -0.4996, 0.0347, -0.0347, -0.4996, 0.1042, -0.0347, -0.4929, 0.1042, -0.0745, -0.4514, 0.1042, -0.0796, -0.4514, 0.0347, -0.0796, -0.4928, 0.1736, -0.0745, -0.4995, 0.1736, -0.0347, -0.4995, 0.2430, -0.0347, -0.4928, 0.2430, -0.0745, -0.4514, 0.2430, -0.0796, -0.4514, 0.1736, -0.0796, -0.3188, 0.1042, -0.0745, -0.2903, 0.1042, -0.0347, 
-0.2901, 0.0347, -0.0347, -0.3187, 0.0347, -0.0745, -0.3820, 0.0347, -0.0796, -0.3820, 0.1042, -0.0796, -0.3190, 0.2430, -0.0745, -0.2907, 0.2430, -0.0347, -0.2905, 0.1736, -0.0347, -0.3189, 0.1736, -0.0745, -0.3820, 0.1736, -0.0796, -0.3820, 0.2430, -0.0796, -0.4928, 0.3125, -0.0745, -0.4994, 0.3125, -0.0347, -0.4993, 0.3819, -0.0347, -0.4927, 0.3819, -0.0745, -0.4514, 0.3819, -0.0796, -0.4514, 0.3125, -0.0796, 
-0.4537, 0.4537, -0.0755, -0.4746, 0.4745, -0.0347, -0.4399, 0.4928, -0.0347, -0.4321, 0.4906, -0.0728, -0.4927, 0.4398, -0.0347, -0.4905, 0.4321, -0.0728, -0.3081, 0.3814, -0.0755, -0.2841, 0.3633, -0.0347, -0.2906, 0.3125, -0.0347, -0.3189, 0.3125, -0.0745, -0.3820, 0.3125, -0.0796, -0.3820, 0.3819, -0.0796, -0.3820, 0.4995, -0.0347, -0.3125, 0.4995, -0.0347, -0.3125, 0.4928, -0.0745, -0.3820, 0.4928, -0.0745, 
-0.3820, 0.4514, -0.0796, -0.3125, 0.4514, -0.0796, -0.0880, 0.1203, -0.0728, -0.0347, 0.1108, -0.0745, -0.0347, 0.0827, -0.0347, -0.0973, 0.1110, -0.0347, -0.0973, 0.1736, -0.0745, -0.1251, 0.1736, -0.0347, -0.1252, 0.2430, -0.0347, -0.0973, 0.2430, -0.0745, -0.0347, 0.2430, -0.0796, -0.0347, 0.1736, -0.0796, -0.2431, 0.4073, -0.0745, -0.1736, 0.4073, -0.0745, -0.1736, 0.3979, -0.0347, -0.2431, 0.3979, -0.0347, 
-0.2431, 0.4995, -0.0347, -0.1736, 0.4995, -0.0347, -0.1736, 0.4928, -0.0745, -0.2431, 0.4928, -0.0745, -0.2431, 0.4514, -0.0796, -0.1736, 0.4514, -0.0796, -0.0976, 0.3125, -0.0745, -0.1258, 0.3125, -0.0347, -0.1326, 0.3633, -0.0347, -0.1086, 0.3814, -0.0755, -0.0347, 0.3819, -0.0796, -0.0347, 0.3125, -0.0796, -0.1042, 0.4995, -0.0347, -0.0347, 0.4995, -0.0347, -0.0347, 0.4928, -0.0745, -0.1042, 0.4928, -0.0745, 
-0.1042, 0.4514, -0.0796, -0.0347, 0.4514, -0.0796, -0.4996, 0.0347, 0.0347, -0.4929, 0.0347, 0.0745, -0.4929, 0.1042, 0.0745, -0.4996, 0.1042, 0.0347, -0.4514, 0.0347, 0.0796, -0.4514, 0.1042, 0.0796, -0.4995, 0.1736, 0.0347, -0.4928, 0.1736, 0.0745, -0.4928, 0.2430, 0.0745, -0.4995, 0.2430, 0.0347, -0.4514, 0.1736, 0.0796, -0.4514, 0.2430, 0.0796, -0.2903, 0.1042, 0.0347, -0.3188, 0.1042, 0.0745, 
-0.3187, 0.0347, 0.0745, -0.2901, 0.0347, 0.0347, -0.3820, 0.1042, 0.0796, -0.3820, 0.0347, 0.0796, -0.2907, 0.2430, 0.0347, -0.3190, 0.2430, 0.0745, -0.3189, 0.1736, 0.0745, -0.2905, 0.1736, 0.0347, -0.3820, 0.2430, 0.0796, -0.3820, 0.1736, 0.0796, -0.4994, 0.3125, 0.0347, -0.4928, 0.3125, 0.0745, -0.4927, 0.3819, 0.0745, -0.4993, 0.3819, 0.0347, -0.4514, 0.3125, 0.0796, -0.4514, 0.3819, 0.0796, 
-0.4746, 0.4745, 0.0347, -0.4537, 0.4537, 0.0755, -0.4321, 0.4906, 0.0728, -0.4399, 0.4928, 0.0347, -0.4905, 0.4321, 0.0728, -0.4927, 0.4398, 0.0347, -0.2841, 0.3633, 0.0347, -0.3081, 0.3814, 0.0755, -0.3189, 0.3125, 0.0745, -0.2906, 0.3125, 0.0347, -0.3820, 0.3819, 0.0796, -0.3820, 0.3125, 0.0796, -0.3820, 0.4928, 0.0745, -0.3125, 0.4928, 0.0745, -0.3125, 0.4995, 0.0347, -0.3820, 0.4995, 0.0347, 
-0.3125, 0.4514, 0.0796, -0.3820, 0.4514, 0.0796, -0.0973, 0.1110, 0.0347, -0.0347, 0.0827, 0.0347, -0.0347, 0.1108, 0.0745, -0.0880, 0.1203, 0.0728, -0.1252, 0.1736, 0.0347, -0.0974, 0.1736, 0.0745, -0.0975, 0.2430, 0.0745, -0.1255, 0.2430, 0.0347, -0.0347, 0.1736, 0.0796, -0.0347, 0.2430, 0.0796, -0.2431, 0.3979, 0.0347, -0.1736, 0.3979, 0.0347, -0.1736, 0.4073, 0.0745, -0.2431, 0.4073, 0.0745, 
-0.2431, 0.4928, 0.0745, -0.1736, 0.4928, 0.0745, -0.1736, 0.4995, 0.0347, -0.2431, 0.4995, 0.0347, -0.1736, 0.4514, 0.0796, -0.2431, 0.4514, 0.0796, -0.1259, 0.3125, 0.0347, -0.0977, 0.3125, 0.0745, -0.1086, 0.3814, 0.0755, -0.1326, 0.3633, 0.0347, -0.0347, 0.3125, 0.0796, -0.0347, 0.3819, 0.0796, -0.1042, 0.4928, 0.0745, -0.0347, 0.4928, 0.0745, -0.0347, 0.4995, 0.0347, -0.1042, 0.4995, 0.0347, 
-0.0347, 0.4514, 0.0796, -0.1042, 0.4514, 0.0796, 0.0347, -0.4928, -0.0745, 0.1041, -0.4927, -0.0745, 0.1041, -0.4993, -0.0347, 0.0347, -0.4994, -0.0347, 0.0347, -0.4514, -0.0796, 0.1041, -0.4514, -0.0796, 0.0347, -0.4148, -0.0347, 0.1041, -0.4053, -0.0347, 0.1041, -0.4110, -0.0745, 0.0347, -0.4157, -0.0745, 0.1736, -0.4927, -0.0745, 0.2430, -0.4927, -0.0745, 0.2430, -0.4993, -0.0347, 0.1736, -0.4993, -0.0347, 
0.1736, -0.4514, -0.0796, 0.2430, -0.4514, -0.0796, 0.2371, -0.3760, -0.0755, 0.2109, -0.3496, -0.0347, 0.2392, -0.3125, -0.0347, 0.2585, -0.3125, -0.0745, 0.1736, -0.3742, -0.0347, 0.1736, -0.3955, -0.0745, 0.0932, -0.1736, -0.0745, 0.1169, -0.1736, -0.0347, 0.0915, -0.2265, -0.0347, 0.0841, -0.2205, -0.0728, 0.0347, -0.2276, -0.0745, 0.0347, -0.2468, -0.0347, 0.0347, -0.1736, -0.0796, 0.0347, -0.0856, -0.0347, 
0.0948, -0.1134, -0.0347, 0.0863, -0.1219, -0.0728, 0.0347, -0.1123, -0.0745, 0.2759, -0.0748, -0.0728, 0.2750, -0.0775, -0.0347, 0.2499, -0.0347, -0.0347, 0.2638, -0.0347, -0.0745, 0.3125, -0.4927, -0.0745, 0.3819, -0.4927, -0.0745, 0.3819, -0.4992, -0.0347, 0.3125, -0.4992, -0.0347, 0.3125, -0.4514, -0.0796, 0.3819, -0.4514, -0.0796, 0.3125, -0.3820, -0.0796, 0.3125, -0.3125, -0.0796, 0.3819, -0.3125, -0.0796, 
0.3819, -0.3820, -0.0796, 0.4535, -0.4536, -0.0755, 0.4740, -0.4741, -0.0347, 0.4393, -0.4927, -0.0347, 0.4317, -0.4905, -0.0728, 0.4905, -0.4318, -0.0728, 0.4927, -0.4394, -0.0347, 0.4927, -0.3125, -0.0745, 0.4994, -0.3125, -0.0347, 0.4993, -0.3820, -0.0347, 0.4927, -0.3820, -0.0745, 0.4514, -0.3820, -0.0796, 0.4514, -0.3125, -0.0796, 0.3075, -0.2439, -0.0755, 0.2827, -0.2277, -0.0347, 0.2888, -0.1736, -0.0347, 
0.3180, -0.1736, -0.0745, 0.3819, -0.1736, -0.0796, 0.3819, -0.2431, -0.0796, 0.3080, -0.1005, -0.0755, 0.3125, -0.0347, -0.0796, 0.3819, -0.0347, -0.0796, 0.3819, -0.1042, -0.0796, 0.4928, -0.1736, -0.0745, 0.4995, -0.1736, -0.0347, 0.4994, -0.2431, -0.0347, 0.4928, -0.2431, -0.0745, 0.4514, -0.2431, -0.0796, 0.4514, -0.1736, -0.0796, 0.4929, -0.0347, -0.0745, 0.4997, -0.0347, -0.0347, 0.4996, -0.1042, -0.0347, 
0.4928, -0.1042, -0.0745, 0.4514, -0.1042, -0.0796, 0.4514, -0.0347, -0.0796, 0.2838, -0.1123, -0.0347, 0.2713, -0.2624, -0.0347, 0.2735, -0.2675, -0.0728, 0.0347, -0.4994, 0.0347, 0.1041, -0.4993, 0.0347, 0.1041, -0.4927, 0.0745, 0.0347, -0.4928, 0.0745, 0.1041, -0.4514, 0.0796, 0.0347, -0.4514, 0.0796, 0.0347, -0.4158, 0.0745, 0.1041, -0.4110, 0.0745, 0.1041, -0.4053, 0.0347, 0.0347, -0.4148, 0.0347, 
0.1736, -0.4993, 0.0347, 0.2430, -0.4993, 0.0347, 0.2430, -0.4927, 0.0745, 0.1736, -0.4927, 0.0745, 0.2430, -0.4514, 0.0796, 0.1736, -0.4514, 0.0796, 0.2109, -0.3496, 0.0347, 0.2371, -0.3760, 0.0755, 0.2585, -0.3125, 0.0745, 0.2392, -0.3125, 0.0347, 0.1736, -0.3955, 0.0745, 0.1736, -0.3742, 0.0347, 0.1169, -0.1736, 0.0347, 0.0932, -0.1736, 0.0745, 0.0841, -0.2205, 0.0728, 0.0915, -0.2265, 0.0347, 
0.0347, -0.2468, 0.0347, 0.0347, -0.2276, 0.0745, 0.0347, -0.1736, 0.0796, 0.0347, -0.1123, 0.0745, 0.0863, -0.1219, 0.0728, 0.0948, -0.1134, 0.0347, 0.0347, -0.0856, 0.0347, 0.2750, -0.0775, 0.0347, 0.2759, -0.0748, 0.0728, 0.2638, -0.0347, 0.0745, 0.2499, -0.0347, 0.0347, 0.3125, -0.4992, 0.0347, 0.3819, -0.4992, 0.0347, 0.3819, -0.4927, 0.0745, 0.3125, -0.4927, 0.0745, 0.3819, -0.4514, 0.0796, 
0.3125, -0.4514, 0.0796, 0.3819, -0.3820, 0.0796, 0.3819, -0.3125, 0.0796, 0.3125, -0.3125, 0.0796, 0.3125, -0.3820, 0.0796, 0.4740, -0.4741, 0.0347, 0.4535, -0.4536, 0.0755, 0.4317, -0.4905, 0.0728, 0.4393, -0.4927, 0.0347, 0.4927, -0.4394, 0.0347, 0.4905, -0.4318, 0.0728, 0.4997, -0.3125, 0.0347, 0.4931, -0.3125, 0.0745, 0.4929, -0.3820, 0.0745, 0.4995, -0.3820, 0.0347, 0.4514, -0.3125, 0.0796, 
0.4514, -0.3820, 0.0796, 0.2827, -0.2277, 0.0347, 0.3075, -0.2439, 0.0755, 0.3180, -0.1736, 0.0745, 0.2888, -0.1736, 0.0347, 0.3819, -0.2431, 0.0796, 0.3819, -0.1736, 0.0796, 0.3819, -0.1042, 0.0796, 0.3819, -0.0347, 0.0796, 0.3125, -0.0347, 0.0796, 0.3080, -0.1005, 0.0755, 0.4997, -0.1736, 0.0347, 0.4931, -0.1736, 0.0745, 0.4931, -0.2431, 0.0745, 0.4997, -0.2431, 0.0347, 0.4514, -0.1736, 0.0796, 
0.4514, -0.2431, 0.0796, 0.4999, -0.0347, 0.0347, 0.4931, -0.0347, 0.0745, 0.4931, -0.1042, 0.0745, 0.4998, -0.1042, 0.0347, 0.4514, -0.0347, 0.0796, 0.4514, -0.1042, 0.0796, 0.2838, -0.1123, 0.0347, 0.2735, -0.2675, 0.0728, 0.2713, -0.2624, 0.0347, 0.1337, 0.0676, -0.0728, 0.1311, 0.0667, -0.0347, 0.0964, 0.0754, -0.0347, 0.1080, 0.0996, -0.0755, 0.0347, 0.1104, -0.0745, 0.0347, 0.0819, -0.0347, 
0.0249, 0.2430, -0.0745, 0.0497, 0.2430, -0.0347, 0.0612, 0.1984, -0.0347, 0.0384, 0.1766, -0.0755, 0.1041, 0.1784, -0.0347, 0.1041, 0.1586, -0.0745, 0.1736, 0.0556, -0.0745, 0.2400, 0.0316, -0.0755, 0.2180, 0.0096, -0.0347, 0.1736, 0.0417, -0.0347, 0.1736, 0.1042, -0.0796, 0.2430, 0.1042, -0.0796, 0.1783, 0.1725, -0.0755, 0.1679, 0.1883, -0.0347, 0.2002, 0.2430, -0.0347, 0.2043, 0.2430, -0.0745, 
0.2430, 0.2430, -0.0796, 0.2430, 0.1736, -0.0796, 0.0371, 0.3124, -0.0755, 0.1041, 0.3348, -0.0745, 0.1041, 0.3224, -0.0347, 0.0579, 0.2950, -0.0347, 0.0347, 0.3819, -0.0796, 0.1041, 0.3819, -0.0796, 0.0347, 0.4995, -0.0347, 0.1041, 0.4995, -0.0347, 0.1041, 0.4928, -0.0745, 0.0347, 0.4928, -0.0745, 0.0347, 0.4514, -0.0796, 0.1041, 0.4514, -0.0796, 0.1796, 0.3165, -0.0755, 0.1736, 0.3819, -0.0796, 
0.2430, 0.3819, -0.0796, 0.2430, 0.3125, -0.0796, 0.1736, 0.4995, -0.0347, 0.2430, 0.4995, -0.0347, 0.2430, 0.4928, -0.0745, 0.1736, 0.4928, -0.0745, 0.1736, 0.4514, -0.0796, 0.2430, 0.4514, -0.0796, 0.1712, 0.3052, -0.0347, 0.3125, 0.0347, -0.0796, 0.3125, 0.1042, -0.0796, 0.3819, 0.1042, -0.0796, 0.3819, 0.0347, -0.0796, 0.3125, 0.1736, -0.0796, 0.3125, 0.2430, -0.0796, 0.3819, 0.2430, -0.0796, 
0.3819, 0.1736, -0.0796, 0.4929, 0.1042, -0.0745, 0.4999, 0.1042, -0.0347, 0.4998, 0.0347, -0.0347, 0.4929, 0.0347, -0.0745, 0.4514, 0.0347, -0.0796, 0.4514, 0.1042, -0.0796, 0.4930, 0.2430, -0.0745, 0.5000, 0.2430, -0.0347, 0.4999, 0.1736, -0.0347, 0.4930, 0.1736, -0.0745, 0.4514, 0.1736, -0.0796, 0.4514, 0.2430, -0.0796, 0.3125, 0.3125, -0.0796, 0.3125, 0.3819, -0.0796, 0.3819, 0.3819, -0.0796, 
0.3819, 0.3125, -0.0796, 0.3125, 0.4995, -0.0347, 0.3819, 0.4995, -0.0347, 0.3819, 0.4928, -0.0745, 0.3125, 0.4928, -0.0745, 0.3125, 0.4514, -0.0796, 0.3819, 0.4514, -0.0796, 0.4930, 0.3819, -0.0745, 0.4999, 0.3819, -0.0347, 0.5000, 0.3125, -0.0347, 0.4930, 0.3125, -0.0745, 0.4514, 0.3125, -0.0796, 0.4514, 0.3819, -0.0796, 0.4321, 0.4906, -0.0728, 0.4398, 0.4928, -0.0347, 0.4745, 0.4745, -0.0347, 
0.4537, 0.4537, -0.0755, 0.4929, 0.4398, -0.0347, 0.4907, 0.4321, -0.0728, 0.1311, 0.0667, 0.0347, 0.1337, 0.0676, 0.0728, 0.1080, 0.0996, 0.0755, 0.0964, 0.0754, 0.0347, 0.0347, 0.0819, 0.0347, 0.0347, 0.1104, 0.0745, 0.0497, 0.2430, 0.0347, 0.0249, 0.2430, 0.0745, 0.0384, 0.1766, 0.0755, 0.0612, 0.1984, 0.0347, 0.1041, 0.1586, 0.0745, 0.1041, 0.1784, 0.0347, 0.1736, 0.0417, 0.0347, 
0.2180, 0.0096, 0.0347, 0.2400, 0.0316, 0.0755, 0.1736, 0.0556, 0.0745, 0.2430, 0.1042, 0.0796, 0.1736, 0.1042, 0.0796, 0.1679, 0.1883, 0.0347, 0.1783, 0.1725, 0.0755, 0.2043, 0.2430, 0.0745, 0.2002, 0.2430, 0.0347, 0.2430, 0.1736, 0.0796, 0.2430, 0.2430, 0.0796, 0.0579, 0.2950, 0.0347, 0.1041, 0.3224, 0.0347, 0.1041, 0.3348, 0.0745, 0.0371, 0.3124, 0.0755, 0.1041, 0.3819, 0.0796, 
0.0347, 0.3819, 0.0796, 0.0347, 0.4928, 0.0745, 0.1041, 0.4928, 0.0745, 0.1041, 0.4995, 0.0347, 0.0347, 0.4995, 0.0347, 0.1041, 0.4514, 0.0796, 0.0347, 0.4514, 0.0796, 0.2430, 0.3125, 0.0796, 0.2430, 0.3819, 0.0796, 0.1736, 0.3819, 0.0796, 0.1796, 0.3165, 0.0755, 0.1736, 0.4928, 0.0745, 0.2430, 0.4928, 0.0745, 0.2430, 0.4995, 0.0347, 0.1736, 0.4995, 0.0347, 0.2430, 0.4514, 0.0796, 
0.1736, 0.4514, 0.0796, 0.1712, 0.3052, 0.0347, 0.3819, 0.0347, 0.0796, 0.3819, 0.1042, 0.0796, 0.3125, 0.1042, 0.0796, 0.3125, 0.0347, 0.0796, 0.3819, 0.1736, 0.0796, 0.3819, 0.2430, 0.0796, 0.3125, 0.2430, 0.0796, 0.3125, 0.1736, 0.0796, 0.5000, 0.1042, 0.0347, 0.4931, 0.1042, 0.0745, 0.4931, 0.0347, 0.0745, 0.5000, 0.0347, 0.0347, 0.4514, 0.1042, 0.0796, 0.4514, 0.0347, 0.0796, 
0.5000, 0.2430, 0.0347, 0.4931, 0.2430, 0.0745, 0.4931, 0.1736, 0.0745, 0.5000, 0.1736, 0.0347, 0.4514, 0.2430, 0.0796, 0.4514, 0.1736, 0.0796, 0.3819, 0.3125, 0.0796, 0.3819, 0.3819, 0.0796, 0.3125, 0.3819, 0.0796, 0.3125, 0.3125, 0.0796, 0.3125, 0.4928, 0.0745, 0.3819, 0.4928, 0.0745, 0.3819, 0.4995, 0.0347, 0.3125, 0.4995, 0.0347, 0.3819, 0.4514, 0.0796, 0.3125, 0.4514, 0.0796, 
0.4998, 0.3819, 0.0347, 0.4930, 0.3819, 0.0745, 0.4931, 0.3125, 0.0745, 0.5000, 0.3125, 0.0347, 0.4514, 0.3819, 0.0796, 0.4514, 0.3125, 0.0796, 0.4398, 0.4928, 0.0347, 0.4321, 0.4906, 0.0728, 0.4537, 0.4537, 0.0755, 0.4745, 0.4745, 0.0347, 0.4906, 0.4321, 0.0728, 0.4929, 0.4398, 0.0347, };
const unsigned short edges[][2] = {
0, 1, 1, 2, 0, 2, 2, 3, 0, 3, 3, 4, 2, 4, 2, 5, 4, 5, 6, 7, 7, 8, 6, 8, 8, 9, 6, 9, 9, 10, 6, 10, 
10, 11, 6, 11, 12, 13, 13, 14, 12, 14, 14, 15, 12, 15, 12, 16, 16, 17, 12, 17, 13, 17, 18, 19, 19, 20, 18, 20, 20, 21, 18, 21, 
0, 12, 0, 15, 1, 15, 3, 16, 0, 16, 10, 19, 11, 19, 11, 18, 5, 7, 4, 7, 4, 6, 4, 11, 3, 11, 16, 18, 16, 21, 17, 21, 
3, 18, 22, 23, 23, 24, 22, 24, 24, 25, 22, 25, 25, 26, 22, 26, 26, 27, 22, 27, 28, 29, 29, 30, 28, 30, 30, 31, 28, 31, 31, 32, 
28, 32, 32, 33, 28, 33, 34, 35, 35, 36, 34, 36, 36, 37, 34, 37, 38, 39, 34, 39, 34, 38, 37, 38, 40, 41, 41, 42, 40, 42, 42, 43, 
40, 43, 44, 45, 40, 45, 40, 44, 43, 44, 26, 39, 27, 39, 27, 38, 32, 45, 33, 45, 33, 44, 24, 29, 25, 29, 25, 28, 25, 33, 26, 33, 
35, 42, 35, 43, 34, 43, 39, 44, 39, 43, 26, 44, 46, 47, 47, 48, 46, 48, 48, 49, 46, 49, 46, 50, 50, 51, 46, 51, 47, 51, 52, 53, 
53, 54, 52, 54, 54, 55, 52, 55, 54, 56, 56, 57, 54, 57, 55, 57, 58, 59, 59, 60, 58, 60, 60, 61, 58, 61, 58, 62, 62, 63, 58, 63, 
59, 63, 64, 65, 65, 66, 64, 66, 66, 67, 64, 67, 47, 58, 47, 61, 48, 61, 51, 62, 47, 62, 56, 64, 56, 67, 57, 67, 50, 55, 50, 57, 
51, 57, 62, 67, 62, 66, 63, 66, 51, 67, 68, 69, 69, 70, 68, 70, 70, 71, 68, 71, 68, 72, 72, 73, 68, 73, 69, 73, 71, 74, 68, 74, 
72, 74, 75, 76, 76, 77, 75, 77, 77, 78, 75, 78, 70, 75, 71, 75, 71, 78, 71, 77, 74, 77, 13, 46, 13, 49, 14, 49, 17, 50, 13, 50, 
20, 52, 21, 52, 21, 55, 17, 55, 36, 79, 79, 80, 36, 80, 37, 80, 8, 23, 9, 23, 9, 22, 9, 27, 10, 27, 19, 38, 19, 37, 20, 37, 
10, 38, 53, 79, 53, 80, 52, 80, 20, 80, 81, 82, 82, 83, 81, 83, 83, 84, 81, 84, 84, 85, 83, 85, 83, 86, 85, 86, 87, 88, 88, 89, 
87, 89, 89, 90, 87, 90, 91, 92, 89, 92, 89, 91, 88, 91, 93, 94, 94, 95, 93, 95, 95, 96, 93, 96, 95, 97, 97, 98, 95, 98, 96, 98, 
99, 100, 100, 101, 99, 101, 101, 102, 99, 102, 81, 93, 81, 96, 82, 96, 83, 98, 83, 96, 92, 101, 92, 102, 91, 102, 86, 88, 85, 88, 85, 87, 
83, 91, 83, 88, 97, 99, 97, 102, 98, 102, 91, 98, 103, 104, 104, 105, 103, 105, 105, 106, 103, 106, 107, 108, 105, 108, 105, 107, 104, 107, 109, 110, 
110, 111, 109, 111, 111, 112, 109, 112, 113, 114, 111, 114, 111, 113, 110, 113, 115, 116, 116, 117, 115, 117, 117, 118, 115, 118, 116, 119, 117, 119, 119, 120, 
117, 120, 121, 122, 122, 123, 121, 123, 123, 124, 121, 124, 122, 125, 123, 125, 125, 126, 123, 126, 108, 119, 108, 120, 107, 120, 114, 125, 114, 126, 113, 126, 
105, 110, 106, 110, 106, 109, 108, 113, 108, 110, 116, 123, 116, 124, 115, 124, 116, 126, 119, 126, 113, 119, 127, 128, 128, 129, 127, 129, 129, 130, 127, 130, 
129, 131, 131, 132, 129, 132, 130, 132, 133, 134, 134, 135, 133, 135, 135, 136, 133, 136, 135, 137, 137, 138, 135, 138, 136, 138, 139, 140, 140, 141, 139, 141, 
141, 142, 139, 142, 141, 143, 143, 144, 141, 144, 142, 144, 145, 146, 146, 147, 145, 147, 147, 148, 145, 148, 128, 139, 128, 142, 129, 142, 131, 144, 131, 142, 
137, 145, 137, 148, 138, 148, 131, 137, 131, 135, 132, 135, 143, 146, 143, 145, 144, 145, 137, 144, 149, 150, 150, 151, 149, 151, 151, 152, 149, 152, 149, 153, 
153, 154, 149, 154, 150, 154, 154, 155, 151, 155, 151, 154, 156, 157, 157, 158, 156, 158, 158, 159, 156, 159, 151, 156, 152, 156, 152, 159, 155, 157, 155, 156, 
94, 127, 94, 130, 95, 130, 97, 132, 97, 130, 100, 134, 100, 135, 99, 135, 99, 132, 117, 160, 160, 161, 117, 161, 118, 161, 89, 104, 90, 104, 90, 103, 
92, 107, 92, 104, 100, 117, 100, 120, 101, 120, 101, 107, 134, 160, 134, 161, 133, 161, 117, 134, 162, 163, 163, 164, 162, 164, 164, 165, 162, 165, 165, 166, 
162, 166, 166, 167, 162, 167, 168, 169, 169, 170, 168, 170, 170, 171, 168, 171, 171, 172, 168, 172, 172, 173, 168, 173, 174, 175, 175, 176, 174, 176, 176, 177, 
174, 177, 178, 179, 174, 179, 174, 178, 177, 178, 180, 181, 181, 182, 180, 182, 182, 183, 180, 183, 184, 185, 180, 185, 180, 184, 183, 184, 166, 179, 167, 179, 
167, 178, 172, 185, 173, 185, 173, 184, 164, 169, 165, 169, 165, 168, 165, 173, 166, 173, 175, 182, 175, 183, 174, 183, 179, 184, 179, 183, 166, 184, 186, 187, 
187, 188, 186, 188, 188, 189, 186, 189, 189, 190, 186, 190, 190, 191, 186, 191, 192, 193, 193, 194, 192, 194, 194, 195, 192, 195, 193, 196, 192, 196, 192, 197, 
196, 197, 198, 199, 199, 200, 198, 200, 200, 201, 198, 201, 202, 203, 198, 203, 198, 202, 201, 202, 204, 205, 205, 206, 204, 206, 206, 207, 204, 207, 207, 208, 
206, 208, 206, 209, 208, 209, 190, 203, 191, 203, 191, 202, 194, 204, 194, 207, 195, 207, 192, 207, 192, 208, 188, 196, 189, 196, 189, 197, 189, 192, 190, 192, 
203, 208, 203, 209, 198, 209, 190, 208, 210, 211, 211, 212, 210, 212, 212, 213, 210, 213, 214, 215, 215, 216, 214, 216, 216, 217, 214, 217, 217, 218, 214, 218, 
218, 219, 214, 219, 213, 215, 210, 215, 210, 214, 210, 219, 211, 219, 220, 221, 221, 222, 220, 222, 222, 223, 220, 223, 224, 225, 225, 226, 224, 226, 226, 227, 
224, 227, 227, 228, 226, 228, 226, 229, 228, 229, 230, 231, 231, 232, 230, 232, 232, 233, 230, 233, 233, 234, 230, 234, 234, 235, 230, 235, 236, 237, 237, 238, 
236, 238, 238, 239, 236, 239, 239, 240, 238, 240, 238, 241, 240, 241, 221, 233, 221, 232, 222, 232, 225, 236, 225, 239, 226, 239, 229, 239, 229, 240, 220, 228, 
220, 229, 221, 229, 233, 240, 233, 241, 234, 241, 221, 240, 198, 220, 198, 223, 199, 223, 205, 224, 205, 227, 206, 227, 209, 227, 209, 228, 198, 228, 170, 187, 
171, 187, 171, 186, 171, 191, 172, 191, 181, 200, 181, 201, 180, 201, 185, 202, 185, 201, 172, 202, 216, 231, 217, 231, 217, 230, 217, 235, 218, 235, 242, 243, 
243, 244, 242, 244, 244, 245, 242, 245, 246, 247, 244, 247, 244, 246, 243, 246, 248, 249, 249, 250, 248, 250, 250, 251, 248, 251, 252, 253, 250, 253, 250, 252, 
249, 252, 254, 255, 255, 256, 254, 256, 256, 257, 254, 257, 255, 258, 256, 258, 258, 259, 256, 259, 260, 261, 261, 262, 260, 262, 262, 263, 260, 263, 261, 264, 
262, 264, 264, 265, 262, 265, 247, 258, 247, 259, 246, 259, 253, 264, 253, 265, 252, 265, 244, 249, 245, 249, 245, 248, 247, 252, 247, 249, 255, 262, 255, 263, 
254, 263, 255, 265, 258, 265, 252, 258, 266, 267, 267, 268, 266, 268, 268, 269, 266, 269, 270, 271, 268, 271, 268, 270, 267, 270, 272, 273, 273, 274, 272, 274, 
274, 275, 272, 275, 273, 276, 272, 276, 272, 277, 276, 277, 278, 279, 279, 280, 278, 280, 280, 281, 278, 281, 279, 282, 280, 282, 282, 283, 280, 283, 284, 285, 
285, 286, 284, 286, 286, 287, 284, 287, 285, 288, 284, 288, 284, 289, 288, 289, 271, 282, 271, 283, 270, 283, 274, 284, 274, 287, 275, 287, 274, 289, 273, 289, 
268, 276, 269, 276, 269, 277, 271, 273, 271, 276, 279, 288, 279, 289, 282, 289, 273, 282, 290, 291, 291, 292, 290, 292, 292, 293, 290, 293, 294, 295, 295, 296, 
294, 296, 296, 297, 294, 297, 298, 299, 296, 299, 296, 298, 295, 298, 293, 295, 290, 295, 290, 294, 292, 298, 292, 295, 300, 301, 301, 302, 300, 302, 302, 303, 
300, 303, 304, 305, 305, 306, 304, 306, 306, 307, 304, 307, 305, 308, 304, 308, 304, 309, 308, 309, 310, 311, 311, 312, 310, 312, 312, 313, 310, 313, 314, 315, 
312, 315, 312, 314, 311, 314, 316, 317, 317, 318, 316, 318, 318, 319, 316, 319, 317, 320, 316, 320, 316, 321, 320, 321, 301, 313, 301, 312, 302, 312, 305, 316, 
305, 319, 306, 319, 305, 321, 308, 321, 302, 308, 302, 309, 303, 309, 315, 320, 315, 321, 312, 321, 308, 312, 278, 300, 278, 303, 279, 303, 285, 304, 285, 307, 
286, 307, 285, 309, 288, 309, 288, 303, 250, 267, 251, 267, 251, 266, 253, 270, 253, 267, 261, 280, 261, 281, 260, 281, 261, 283, 264, 283, 264, 270, 296, 311, 
297, 311, 297, 310, 299, 314, 299, 311, 322, 323, 323, 324, 322, 324, 324, 325, 322, 325, 322, 326, 326, 327, 322, 327, 323, 327, 328, 329, 329, 330, 328, 330, 
330, 331, 328, 331, 332, 333, 333, 334, 332, 334, 334, 335, 332, 335, 332, 336, 336, 337, 332, 337, 333, 337, 338, 339, 339, 340, 338, 340, 340, 341, 338, 341, 
339, 342, 338, 342, 338, 343, 342, 343, 323, 332, 323, 335, 324, 335, 327, 336, 323, 336, 329, 342, 329, 343, 330, 343, 326, 331, 326, 330, 327, 330, 336, 343, 
336, 338, 337, 338, 327, 343, 344, 345, 345, 346, 344, 346, 346, 347, 344, 347, 347, 348, 346, 348, 346, 349, 348, 349, 348, 350, 344, 350, 344, 348, 351, 352, 
352, 353, 351, 353, 353, 354, 351, 354, 355, 356, 356, 357, 355, 357, 357, 358, 355, 358, 345, 352, 345, 353, 344, 353, 350, 354, 350, 353, 359, 360, 360, 361, 
359, 361, 361, 362, 359, 362, 359, 363, 363, 364, 359, 364, 360, 364, 365, 366, 366, 367, 365, 367, 367, 368, 365, 368, 369, 370, 370, 371, 369, 371, 371, 372, 
369, 372, 369, 373, 373, 374, 369, 374, 370, 374, 375, 376, 376, 377, 375, 377, 377, 378, 375, 378, 379, 380, 375, 380, 375, 379, 378, 379, 360, 372, 360, 371, 
361, 371, 364, 369, 360, 369, 367, 380, 368, 380, 368, 379, 363, 365, 363, 368, 364, 368, 374, 377, 374, 378, 373, 378, 369, 379, 369, 378, 364, 379, 381, 382, 
382, 383, 381, 383, 383, 384, 381, 384, 384, 385, 381, 385, 385, 386, 381, 386, 387, 388, 388, 389, 387, 389, 389, 390, 387, 390, 391, 392, 392, 393, 391, 393, 
393, 394, 391, 394, 395, 396, 391, 396, 391, 395, 394, 395, 397, 398, 398, 399, 397, 399, 399, 400, 397, 400, 401, 402, 397, 402, 397, 401, 400, 401, 385, 396, 
386, 396, 386, 395, 389, 402, 390, 402, 390, 401, 383, 403, 384, 403, 387, 403, 384, 387, 384, 390, 385, 390, 392, 399, 392, 400, 391, 400, 396, 401, 396, 400, 
385, 401, 333, 359, 333, 362, 334, 362, 337, 363, 333, 363, 341, 366, 338, 366, 338, 365, 337, 365, 382, 404, 381, 404, 381, 405, 404, 405, 355, 387, 355, 403, 
356, 403, 358, 388, 355, 388, 340, 404, 341, 404, 341, 405, 366, 381, 366, 386, 367, 386, 376, 393, 376, 394, 375, 394, 380, 395, 380, 394, 367, 395, 341, 381, 
406, 407, 407, 408, 406, 408, 408, 409, 406, 409, 408, 410, 410, 411, 408, 411, 409, 411, 412, 413, 413, 414, 412, 414, 414, 415, 412, 415, 416, 417, 417, 418, 
416, 418, 418, 419, 416, 419, 418, 420, 420, 421, 418, 421, 419, 421, 422, 423, 423, 424, 422, 424, 424, 425, 422, 425, 423, 426, 422, 426, 422, 427, 426, 427, 
407, 416, 407, 419, 408, 419, 410, 421, 410, 419, 413, 426, 413, 427, 414, 427, 410, 413, 410, 412, 411, 412, 420, 423, 420, 426, 421, 426, 413, 421, 428, 429, 
429, 430, 428, 430, 430, 431, 428, 431, 431, 432, 430, 432, 430, 433, 432, 433, 429, 434, 430, 434, 433, 434, 435, 436, 436, 437, 435, 437, 437, 438, 435, 438, 
439, 440, 440, 441, 439, 441, 441, 442, 439, 442, 429, 436, 429, 437, 428, 437, 429, 435, 434, 435, 443, 444, 444, 445, 443, 445, 445, 446, 443, 446, 445, 447, 
447, 448, 445, 448, 446, 448, 449, 450, 450, 451, 449, 451, 451, 452, 449, 452, 453, 454, 454, 455, 453, 455, 455, 456, 453, 456, 453, 457, 457, 458, 453, 458, 
454, 458, 459, 460, 460, 461, 459, 461, 461, 462, 459, 462, 460, 463, 461, 463, 463, 464, 461, 464, 444, 456, 444, 455, 445, 455, 447, 454, 447, 455, 450, 463, 
450, 464, 449, 464, 447, 449, 447, 452, 448, 452, 458, 461, 458, 462, 457, 462, 458, 464, 454, 464, 449, 454, 465, 466, 466, 467, 465, 467, 467, 468, 465, 468, 
469, 470, 467, 470, 467, 469, 466, 469, 471, 472, 472, 473, 471, 473, 473, 474, 471, 474, 475, 476, 476, 477, 475, 477, 477, 478, 475, 478, 476, 479, 477, 479, 
479, 480, 477, 480, 481, 482, 482, 483, 481, 483, 483, 484, 481, 484, 482, 485, 483, 485, 485, 486, 483, 486, 470, 479, 470, 480, 469, 480, 472, 485, 472, 486, 
471, 486, 467, 474, 468, 474, 474, 487, 468, 487, 470, 471, 470, 474, 476, 483, 476, 484, 475, 484, 476, 486, 479, 486, 471, 479, 417, 443, 417, 446, 418, 446, 
420, 448, 420, 446, 424, 451, 424, 452, 423, 452, 423, 448, 466, 488, 465, 488, 465, 489, 488, 489, 439, 487, 439, 474, 440, 474, 441, 473, 441, 474, 424, 488, 
425, 488, 425, 489, 450, 469, 450, 466, 451, 466, 460, 477, 460, 478, 459, 478, 460, 480, 463, 480, 463, 469, 451, 488, 490, 491, 491, 492, 490, 492, 492, 493, 
490, 493, 493, 494, 492, 494, 492, 495, 494, 495, 496, 497, 497, 498, 496, 498, 498, 499, 496, 499, 498, 500, 500, 501, 498, 501, 499, 501, 502, 503, 503, 504, 
502, 504, 504, 505, 502, 505, 502, 506, 506, 507, 502, 507, 503, 507, 508, 509, 509, 510, 508, 510, 510, 511, 508, 511, 511, 512, 508, 512, 512, 513, 508, 513, 
490, 502, 490, 505, 491, 505, 493, 506, 490, 506, 500, 509, 500, 508, 501, 508, 494, 499, 494, 501, 493, 501, 506, 508, 506, 513, 507, 513, 493, 508, 514, 515, 
515, 516, 514, 516, 516, 517, 514, 517, 514, 518, 518, 519, 514, 519, 515, 519, 520, 521, 521, 522, 520, 522, 522, 523, 520, 523, 523, 524, 522, 524, 522, 525, 
524, 525, 526, 527, 527, 528, 526, 528, 528, 529, 526, 529, 530, 531, 531, 532, 530, 532, 532, 533, 530, 533, 533, 534, 532, 534, 532, 535, 534, 535, 515, 526, 
526, 536, 515, 536, 516, 536, 519, 527, 515, 527, 521, 530, 521, 533, 522, 533, 525, 533, 525, 534, 518, 524, 518, 525, 519, 525, 527, 534, 527, 535, 528, 535, 
519, 534, 537, 538, 538, 539, 537, 539, 539, 540, 537, 540, 541, 542, 542, 543, 541, 543, 543, 544, 541, 544, 545, 546, 546, 547, 545, 547, 547, 548, 545, 548, 
549, 550, 545, 550, 545, 549, 548, 549, 551, 552, 552, 553, 551, 553, 553, 554, 551, 554, 555, 556, 551, 556, 551, 555, 554, 555, 539, 550, 540, 550, 540, 549, 
543, 556, 544, 556, 544, 555, 538, 541, 538, 544, 539, 544, 546, 553, 546, 554, 545, 554, 550, 555, 550, 554, 539, 555, 557, 558, 558, 559, 557, 559, 559, 560, 
557, 560, 561, 562, 562, 563, 561, 563, 563, 564, 561, 564, 564, 565, 563, 565, 563, 566, 565, 566, 567, 568, 568, 569, 567, 569, 569, 570, 567, 570, 571, 572, 
567, 572, 567, 571, 570, 571, 573, 574, 574, 575, 573, 575, 575, 576, 573, 576, 575, 577, 577, 578, 575, 578, 576, 578, 559, 572, 560, 572, 560, 571, 562, 574, 
562, 573, 563, 573, 566, 573, 566, 576, 558, 565, 558, 566, 559, 566, 568, 577, 568, 578, 567, 578, 572, 576, 572, 578, 559, 576, 507, 538, 503, 538, 503, 537, 
512, 542, 513, 542, 513, 541, 507, 541, 528, 558, 529, 558, 529, 557, 531, 561, 531, 564, 532, 564, 535, 564, 535, 565, 528, 565, 497, 517, 497, 514, 496, 514, 
510, 536, 511, 536, 511, 526, 511, 529, 512, 529, 542, 557, 542, 560, 543, 560, 552, 569, 552, 570, 551, 570, 556, 571, 556, 570, 543, 571, 512, 557, 579, 580, 
580, 581, 579, 581, 581, 582, 579, 582, 582, 583, 581, 583, 581, 584, 583, 584, 585, 586, 586, 587, 585, 587, 587, 588, 585, 588, 587, 589, 589, 590, 587, 590, 
588, 590, 591, 592, 592, 593, 591, 593, 593, 594, 591, 594, 593, 595, 595, 596, 593, 596, 594, 596, 597, 598, 598, 599, 597, 599, 599, 600, 597, 600, 601, 602, 
599, 602, 599, 601, 598, 601, 579, 591, 579, 594, 580, 594, 581, 596, 581, 594, 589, 598, 589, 597, 590, 597, 581, 589, 581, 587, 584, 587, 595, 601, 595, 598, 
596, 598, 589, 596, 603, 604, 604, 605, 603, 605, 605, 606, 603, 606, 605, 607, 607, 608, 605, 608, 606, 608, 609, 610, 610, 611, 609, 611, 611, 612, 609, 612, 
610, 613, 609, 613, 609, 614, 613, 614, 615, 616, 616, 617, 615, 617, 617, 618, 615, 618, 619, 620, 620, 621, 619, 621, 621, 622, 619, 622, 620, 623, 619, 623, 
619, 624, 623, 624, 604, 625, 618, 625, 604, 618, 605, 618, 607, 617, 607, 618, 610, 619, 610, 622, 611, 622, 610, 624, 613, 624, 607, 613, 607, 614, 608, 614, 
616, 623, 616, 624, 617, 624, 613, 617, 626, 627, 627, 628, 626, 628, 628, 629, 626, 629, 630, 631, 631, 632, 630, 632, 632, 633, 630, 633, 634, 635, 635, 636, 
634, 636, 636, 637, 634, 637, 635, 638, 636, 638, 638, 639, 636, 639, 640, 641, 641, 642, 640, 642, 642, 643, 640, 643, 641, 644, 642, 644, 644, 645, 642, 645, 
627, 638, 627, 639, 626, 639, 631, 644, 631, 645, 630, 645, 627, 630, 627, 633, 628, 633, 635, 642, 635, 643, 634, 643, 635, 645, 638, 645, 630, 638, 646, 647, 
647, 648, 646, 648, 648, 649, 646, 649, 650, 651, 651, 652, 650, 652, 652, 653, 650, 653, 651, 654, 650, 654, 650, 655, 654, 655, 656, 657, 657, 658, 656, 658, 
658, 659, 656, 659, 657, 660, 658, 660, 660, 661, 658, 661, 662, 663, 663, 664, 662, 664, 664, 665, 662, 665, 664, 666, 666, 667, 664, 667, 665, 667, 647, 660, 
647, 661, 646, 661, 651, 663, 651, 662, 652, 662, 651, 664, 654, 664, 647, 654, 647, 655, 648, 655, 657, 666, 657, 667, 656, 667, 657, 664, 660, 664, 654, 660, 
595, 628, 595, 629, 593, 629, 602, 632, 602, 633, 601, 633, 601, 628, 616, 648, 616, 649, 615, 649, 620, 650, 620, 653, 621, 653, 620, 655, 623, 655, 623, 648, 
586, 606, 586, 603, 585, 603, 599, 618, 600, 618, 600, 625, 602, 615, 602, 618, 631, 646, 631, 649, 632, 649, 641, 658, 641, 659, 640, 659, 641, 661, 644, 661, 
644, 646, 615, 632, 59, 322, 59, 325, 60, 325, 63, 326, 59, 326, 65, 328, 65, 331, 66, 331, 63, 331, 72, 348, 72, 349, 73, 349, 74, 350, 72, 350, 
76, 351, 76, 354, 77, 354, 74, 354, 140, 406, 140, 409, 141, 409, 143, 411, 143, 409, 146, 412, 146, 415, 147, 415, 146, 411, 153, 432, 153, 433, 154, 433, 
155, 434, 155, 433, 157, 435, 157, 438, 158, 438, 157, 434, 211, 494, 211, 495, 212, 495, 218, 496, 219, 496, 219, 499, 211, 499, 234, 518, 235, 518, 235, 514, 
237, 520, 237, 523, 238, 523, 241, 523, 241, 524, 234, 524, 218, 514, 291, 583, 291, 584, 292, 584, 299, 586, 299, 587, 298, 587, 298, 584, 315, 608, 315, 606, 
314, 606, 317, 609, 317, 612, 318, 612, 317, 614, 320, 614, 320, 608, 314, 586, 30, 163, 31, 163, 31, 162, 31, 167, 32, 167, 41, 176, 41, 177, 40, 177, 
45, 178, 45, 177, 32, 178, 357, 504, 358, 504, 358, 503, 388, 537, 388, 540, 389, 540, 398, 547, 398, 548, 397, 548, 402, 549, 402, 548, 389, 549, 358, 537, 
111, 243, 112, 243, 112, 242, 114, 246, 114, 243, 122, 256, 122, 257, 121, 257, 122, 259, 125, 259, 125, 246, 441, 593, 442, 593, 442, 592, 472, 626, 472, 629, 
473, 629, 482, 636, 482, 637, 481, 637, 482, 639, 485, 639, 485, 626, 473, 593, 1, 81, 1, 84, 2, 84, 5, 84, 5, 85, 7, 87, 7, 90, 8, 90, 
14, 94, 15, 94, 15, 93, 5, 87, 1, 93, 23, 103, 23, 106, 24, 106, 29, 109, 29, 112, 30, 112, 35, 115, 35, 118, 36, 118, 41, 121, 41, 124, 
42, 124, 24, 109, 42, 115, 48, 128, 49, 128, 49, 127, 53, 133, 53, 136, 54, 136, 56, 138, 56, 136, 60, 140, 61, 140, 61, 139, 65, 147, 65, 148, 
64, 148, 48, 139, 64, 138, 69, 149, 69, 152, 70, 152, 73, 153, 69, 153, 76, 158, 76, 159, 75, 159, 70, 159, 8, 103, 79, 161, 79, 133, 14, 127, 
79, 118, 163, 242, 163, 245, 164, 245, 169, 248, 169, 251, 170, 251, 175, 254, 175, 257, 176, 257, 181, 260, 181, 263, 182, 263, 164, 248, 182, 254, 187, 266, 
187, 269, 188, 269, 193, 272, 193, 275, 194, 275, 193, 277, 196, 277, 199, 278, 199, 281, 200, 281, 205, 286, 205, 287, 204, 287, 188, 277, 204, 275, 212, 291, 
213, 291, 213, 290, 215, 294, 215, 297, 216, 297, 213, 294, 222, 301, 223, 301, 223, 300, 225, 306, 225, 307, 224, 307, 231, 310, 231, 313, 232, 313, 237, 318, 
237, 319, 236, 319, 222, 313, 236, 306, 170, 266, 200, 260, 216, 310, 199, 300, 224, 286, 324, 407, 325, 407, 325, 406, 329, 414, 329, 415, 328, 415, 334, 417, 
335, 417, 335, 416, 339, 422, 339, 425, 340, 425, 339, 427, 342, 427, 324, 416, 342, 414, 345, 428, 345, 431, 346, 431, 349, 431, 349, 432, 352, 437, 352, 438, 
351, 438, 356, 439, 356, 442, 357, 442, 352, 428, 361, 444, 362, 444, 362, 443, 370, 453, 370, 456, 371, 456, 374, 457, 370, 457, 376, 459, 376, 462, 377, 462, 
377, 457, 361, 456, 382, 465, 382, 468, 383, 468, 392, 475, 392, 478, 393, 478, 398, 481, 398, 484, 399, 484, 383, 487, 403, 487, 399, 475, 340, 489, 404, 489, 
393, 459, 334, 443, 382, 489, 356, 487, 491, 579, 491, 582, 492, 582, 495, 582, 495, 583, 497, 585, 497, 588, 498, 588, 500, 590, 500, 588, 504, 592, 505, 592, 
505, 591, 509, 597, 509, 600, 510, 600, 491, 591, 509, 590, 516, 604, 517, 604, 517, 603, 521, 611, 521, 612, 520, 612, 531, 621, 531, 622, 530, 622, 536, 625, 
516, 625, 530, 611, 546, 634, 546, 637, 547, 637, 552, 640, 552, 643, 553, 643, 553, 634, 562, 652, 562, 653, 561, 653, 568, 656, 568, 659, 569, 659, 574, 662, 
574, 665, 575, 665, 577, 667, 577, 665, 577, 656, 574, 652, 517, 585, 510, 625, 569, 640, 561, 621, 30, 242, 121, 176, 357, 592, 481, 547, 60, 406, 147, 328, 
73, 432, 158, 351, 212, 583, 318, 520, };
