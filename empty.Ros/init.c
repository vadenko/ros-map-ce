void main()
{

	//Nastraivaem pogodu na servere
    Weather weather = g_Game.GetWeather();

    weather.MissionWeather(false);    //esli false - ispolzuet Weather.c

    weather.GetOvercast().SetLimits( 0.5 , 1.0 );
    weather.GetRain().SetLimits( 0.0 , 0.65 ); 
    weather.GetFog().SetLimits( 0.15 , 0.45 );

    weather.GetOvercast().SetForecastChangeLimits( 0.5, 1.0 ); 
    weather.GetRain().SetForecastChangeLimits( 0.0, 0.1 ); 
    weather.GetFog().SetForecastChangeLimits( 0.15, 0.45 );

    weather.GetOvercast().SetForecastTimeLimits( 1800 , 1800 ); 
    weather.GetRain().SetForecastTimeLimits( 300 , 300 ); 
    weather.GetFog().SetForecastTimeLimits( 1800 , 1800 );

    weather.GetOvercast().Set( Math.RandomFloatInclusive(0.5, 1.0), 1, 0);
    weather.GetRain().Set( 0, 0, 1);
    weather.GetFog().Set( Math.RandomFloatInclusive(0.15, 0.45), 1, 0);

	CreateHive();
	GetHive().InitOffline();
    //Generaciya novih tochek spavna luta, fruktov i td.
    //GetCEApi().ExportProxyData(vector.Zero, 100000);
    //GetCEApi().ExportClusterData();

}

class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			int rndHlt = Math.RandomInt(10,20); //Sostoyanie strartovyh predmetov
			itemEnt.SetHealth("","",rndHlt);
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");
		Class.CastTo(m_player, playerEnt);

		GetGame().SelectPlayer(identity, m_player);

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{

		player.RemoveAllItems();

		EntityAI itemEnt;
		ItemBase itemBs;
        //Startovyy lut igroka
		itemEnt = player.GetInventory().CreateInInventory("TShirt_Beige");
		itemBs = ItemBase.Cast(itemEnt);
		SetRandomHealth(itemEnt);
		
		itemEnt = player.GetInventory().CreateInInventory("TrackSuitPants_Blue");
		itemBs = ItemBase.Cast(itemEnt);
		SetRandomHealth(itemEnt);

		itemEnt = player.GetInventory().CreateInInventory("Wellies_Green");
		itemBs = ItemBase.Cast(itemEnt);
		SetRandomHealth(itemEnt);
		
		itemEnt = player.GetInventory().CreateInInventory("Rag");
		itemBs = ItemBase.Cast(itemEnt);
		itemBs.SetQuantity(3);

		itemEnt = player.GetInventory().CreateInInventory("Roadflare");
		itemBs = ItemBase.Cast(itemEnt);

		itemEnt = player.GetInventory().CreateInInventory("Chemlight_White");
		itemBs = ItemBase.Cast(itemEnt);

		itemEnt = player.GetInventory().CreateInInventory("TunaCan_Opened");
		itemBs = ItemBase.Cast(itemEnt);

		itemEnt = player.GetInventory().CreateInInventory("dzn_tool_watch");
		itemBs = ItemBase.Cast(itemEnt);

	}
};
  
Mission CreateCustomMission(string path)
{
	return new CustomMission();
};