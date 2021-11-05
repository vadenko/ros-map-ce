# ROS CE Official Repo 
[РУС]
Официальный репозиторий файлов центральной экономики пользовательской карты ROS для DayZ Standalone.
Ссылка на модификицию в Steam Workshop: https://steamcommunity.com/sharedfiles/filedetails/?id=2390417799

Краткое описание некоторых важных файлов:
- db/events.xml - настройки событий на сервере таких как спавн животных, фруктов, хеликрашей, полицейских авто и пр.;
- db/types.xml - настройки спавна лута на сервере;
- cfgEffectArea.json - настройки зараженных зон;
- cfgEventSpawns.xml - настройки позиций спавна событий, см. events.xml. Также здесь настройка спавна автомобилей;
- cfgPlayerSpawnPoints.xml - настройка позиций спавна игроков, по-умолчанию игроки спавнятся столько на первом острове;
- cfgRandomPresets.xml - настройки спавна лута в зараженных и одежды на них, по-умолчанию настройки ванильные с черно;
- cfgSpawnableTypes.xml - продолжение настроек лута в/на объектах как в файле выше, сейчас ванилла черно;
- init.c - на данный момент здесь только настройка стартового лута персонажа и зачатки конфигурации нестандарной погоды - пока что отключено, используются стандартные параменты из Weather.c;

Внутри некоторых файлов есть комментарии, подсказывающие за что отвечает тот или иной пункт или строка.
Обратите внимание, это ранняя версия центральной экономики для карты ROS, постепенно будет подрабатываться.
Если возникли какие-либо вопросы, задать их можно на нашем Discord сервере: https://discord.st/ros/

[ENG]
The official repository of the central economy files of the ROS custom map for DayZ Standalone.
Mod in Steam Workshop: https://steamcommunity.com/sharedfiles/filedetails/?id=2390417799

A brief description of some important files:
- db/events.xml - settings for events on the server such as spawn of animals, fruits, helicrashes, police cars, etc .;
- db/types.xml - settings for spawning loot on the server;
- cfgEffectArea.json - settings for contaminated areas;
- cfgEventSpawns.xml - settings for event spawn positions, see events.xml. Also here is the setting for the spawn of cars;
- cfgPlayerSpawnPoints.xml - setting spawn positions for players, by default, players spawn only on the first island;
- cfgRandomPresets.xml - settings for spawning loot in infected and clothes on them, by default the settings are vanilla Cherno;
- cfgSpawnableTypes.xml - continuation of loot settings in/on objects as in the file above, by default the settings are vanilla Cherno;
- init.c - at the moment there is only a setting for the character's starting loot and the rudiments of a non-standard weather configuration - so far disabled, standard parameters from Weather.c are used;

Please note, this is an early version of the central economy for the ROS map, it will gradually be worked on.
If you have any questions, you can ask them on our Discord server: https://discord.st/ros/