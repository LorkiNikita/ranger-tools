struct TShip {
  __cls* cls;

  int _field_004;
  int _field_008;
  byte type; // 0 - Kling, 1 - Ranger, 2 - Liner+Diplomat+Transport, 3 - Pirate, 4 - Warrior 
  byte _field_00D;
  byte _field_00E;
  byte _field_00F;
  int* name;
  int _field_014;
  TPlanet* planet;
  TShip* ruin;
  TStar* star;
  int _field_024;
  int _field_028;
  int _field_02C[32];
  int _field_0AC;
  int _field_0B0;
  int _field_0B4;
  int _field_0B8;
  int _field_0BC;
  int _field_0C0;
  int _field_0C4;
  int _field_0C8;
  int _field_0CC;
  int _field_0D0;
  int _field_0D4;
  int frnd; // FRnd > 0
  int rnd_seed;
  int _field_0E0;
  int _field_0E4;
  int money;
  int _field_0EC;
  TItem* hull; // корпус
  TItem* fueltanks; // топливный бак
  TItem* engine;
  TItem* radar;
  TItem* scaner;
  TItem* repairrobot;
  TItem* cargohook;
  TItem* defgenerator;
  int weapons[5];
  // TItem* weapon_1;
  // TItem* weapon_2;
  // TItem* weapon_3;
  // TItem* weapon_4;
  int weapon_cnt;
  int _field_128;
  int _field_12C;
  int _field_130;
  int _field_134;
  int _field_138;
  int _field_13C;
  int _field_140;
  int _field_144;
  int _field_148;
  int _field_14C;
  int _field_150;
  int _field_154;
  int _field_158;
  int _field_15C;
  int _field_160;
  int _field_164;
  int _field_168;
  int _field_16C;
  int _field_170;
  int _field_174;
  int _field_178;
  int _field_17C;
  int _field_180;
  int _field_184;
  int _field_188;
  int _field_18C;
  int _field_190;
  int _field_194;
  int _field_198;
  int _field_19C;
  int _field_1A0;
  int _field_1A4;
  int _field_1A8;
  int _field_1AC;
  int _field_1B0;
  int _field_1B4;
  int _field_1B8;
  int _field_1BC;
  int _field_1C0;
  int _field_1C4;
  int _field_1C8;
  int _field_1CC;
  int _field_1D0;
  int _field_1D4;
  int _field_1D8;
  int _field_1DC;
  int _field_1E0;
  int _field_1E4;
  int _field_1E8;
  int _field_1EC;
  int _field_1F0;
  int _field_1F4;
  int _field_1F8;
  int _field_1FC;

  int _field_200;
  int _field_204;
  int _field_208;
  int _field_20C;
  int _field_210;
  int _field_214;
  int _field_218;
  int _field_21C;
  int _field_220;
  int _field_224;
  int _field_228;
  int _field_22C;
  int _field_230;
  int _field_234;
  int _field_238;
  int _field_23C;
  int _field_240;
  int _field_244;
  int _field_248;
  int _field_24C;
  int _field_250;
  int _field_254;
  int _field_258;
  int _field_25C;
  int _field_260;
  int _field_264;
  int _field_268;
  int _field_26C;
  int _field_270;
  int _field_274;
  int _field_278;
  int _field_27C;
  int _field_280;
  int _field_284;
  int _field_288;
  int _field_28C;
  int _field_290;
  int _field_294;
  int _field_298;
  int _field_29C;
  int _field_2A0;
  int _field_2A4;
  int _field_2A8;
  int _field_2AC;
  int _field_2B0;
  int _field_2B4;
  int _field_2B8;
  int _field_2BC;
  int _field_2C0;
  int _field_2C4;
  int _field_2C8;
  int _field_2CC;
  int _field_2D0;
  int _field_2D4;
  byte _field_2D8;
  byte _field_2D9;
  byte _field_2DA;
  byte _field_2DB;
  TList* _field_2DC;
  TList* _field_2E0;
  PTR script_ship;
  int _field_2E8;
  int _field_2EC;
  TList* _field_2F0;
  int _field_2F4;
  TList* _field_2F8;
  TList* rewards;

  int rewards_count;
  TList* relations;
  int _field_308;
  int _field_30C;
  int _field_310;
  int _field_314;
  int _field_318;
  int _field_31C;
  int _field_320;
  int _field_324;
  int _field_328;
  int _field_32C;
  int _field_330;
  int _field_334;
  int _field_338;
  int _field_33C;
  double _field_340;
  // int _field_344;
  byte order_type; // 2 - land, 3 - jump, 6 - follow
  byte _field_349;
  byte _field_34A;
  byte _field_34B;
  int order_angle;
  int _field_350;
  PTR destination;
  int _field_354;
  int _field_358;
  byte _field_35C;
  byte _field_35D;
  byte _field_35E;
  byte _field_35F;
  int _field_360;
  int _field_364;
  PTR _field_368;
  byte _field_36C;
  byte is_in_hyperspace;
  byte _field_36E;
  byte _field_36F;
  int _field_370;
  byte _field_374;
  byte _field_375;
  byte _field_376;
  byte _field_377;
  int _field_378;
  int _field_37C;
  int _field_380;
  int _field_384;
  int _field_388;
  int _field_38C;
  int _field_390;
  int _field_394;
  int _field_398;
  int _field_39C;
  int _field_3A0;
  int _field_3A4;
  int money_xored; // == money ^ 0xA4A576AD
  int _field_3AC;
  int _field_3B0;
  int _field_3B4;
  int _field_3B8;
  int _field_3BC;
  int _field_3C0;
  int _field_3C4;
  int _field_3C8;
  int _field_3CC;
  int rank;
  int _field_3D4;
  byte _field_3D8; // used by pirate
  byte _field_3D9;
  byte status_0;
  byte status_1;
  byte status_2;
  byte _field_3DD;
  byte _field_3DE;
  byte _field_3DF;
  byte _field_3E0;
  byte _field_3E1;
  byte _field_3E2;
  byte _field_3E3;
  byte _field_3E4;
  byte _field_3E5;
  byte _field_3E6;
  byte _field_3E7;
  int _field_3E8;
  int _field_3EC;
  int _field_3F0;
  int _field_3F4;
  int _field_3F8;
  int _field_3FC;
};
