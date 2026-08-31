
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/combat/weapon/WeaponProperties.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/part/PartInterface.h>

      
#include <org/allbinary/game/part/weapon/BasicWeaponPart.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RTSLayer.h"
#include "FakeLayerManager.h"
#include "AllBinaryGameLayerManager.h"

class RTSLayerUtil
            : public Object
         {
        

    private: static const instance: RTSLayerUtil = new RTSLayerUtil();

    public static RTSLayerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayerUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const groupCommonFactory: GroupCommonFactory = GroupCommonFactory.getInstance()!;

    WeaponProperties createWeaponProperties(WeaponProperties weaponProperties, int32_t currentLevel, int32_t lastLevel){

    reloadTime: int64_t = weaponProperties!.getReloadTime()!;;
    

                        if(lastLevel > currentLevel)
                        
                                    {
                                    reloadTime= reloadTime +50;
    

                                    }
                                
                             else 
                        if(lastLevel < currentLevel)
                        
                                    {
                                    reloadTime= reloadTime -50;
    

                                    }
                                

    newWeaponProperties: WeaponProperties = new WeaponProperties(reloadTime, weaponProperties!.getTargetingTime(), weaponProperties!.getSpeed()!.getUnscaled(), weaponProperties!.getDamage() /lastLevel *currentLevel, weaponProperties!.getDissipation());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newWeaponProperties;
    
}


    public downgrade(RTSLayer rtsLayer){
rtsLayer!.setLevel(rtsLayer!.getLevel() -1);
    

    partInterfaceArray: std::vector<PartInterface> = rtsLayer!.getPartInterfaceArray()!;;
    

    size: int32_t = partInterfaceArray!.length
                ;;
    

    partInterface: BasicWeaponPart;;
    




                        for (
    index: int32_t = size;--index >= 0; )
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
partInterface!.setWeaponProperties(this.createWeaponProperties(partInterface!.getWeaponProperties(), rtsLayer!.getLevel(), rtsLayer!.getLevel() +1));
    
}

rtsLayer!.select();
    
}


    public upgrade(RTSLayer rtsLayer){
rtsLayer!.setLevel(rtsLayer!.getLevel() +1);
    

    partInterfaceArray: std::vector<PartInterface> = rtsLayer!.getPartInterfaceArray()!;;
    

    size: int32_t = partInterfaceArray!.length
                ;;
    

    partInterface: BasicWeaponPart;;
    




                        for (
    index: int32_t = size;--index >= 0; )
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
partInterface!.setWeaponProperties(this.createWeaponProperties(partInterface!.getWeaponProperties(), rtsLayer!.getLevel(), rtsLayer!.getLevel() -1));
    
}

rtsLayer!.select();
    
}


    private: const MAX_RELOAD_TIME: int64_t = Integer.MAX_VALUE /100000;

    public int64_t getCostExponential(int64_t cost){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ((cost *cost *cost) /(cost *1000));
    
}


    int32_t getWeaponPropertiesCost(WeaponProperties weaponProperties){

    cost: int64_t = (weaponProperties!.getDamage() +weaponProperties!.getRange() +((this.MAX_RELOAD_TIME /weaponProperties!.getReloadTime())>>1));;
    
cost= this.getCostExponential(cost);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(cost);
    
}


    public int32_t getCost(RTSLayer rtsLayer){

    total: int32_t = 0;;
    

    partInterfaceArray: std::vector<PartInterface> = rtsLayer!.getPartInterfaceArray()!;;
    

    size: int32_t = partInterfaceArray!.length
                ;;
    

    partInterface: BasicWeaponPart;;
    

    weaponProperties: WeaponProperties;;
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
weaponProperties= partInterface!.getWeaponProperties();
    
total += this.getWeaponPropertiesCost(weaponProperties);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return total;
    
}


    public int32_t getDowngradeCost(RTSLayer rtsLayer){

    partInterfaceArray: std::vector<PartInterface> = rtsLayer!.getPartInterfaceArray()!;;
    

    size: int32_t = partInterfaceArray!.length
                ;;
    

    downgradeCost: int32_t = 0;;
    

    partInterface: BasicWeaponPart;;
    

    weaponProperties: WeaponProperties;;
    

    downgradeWeaponCost: int32_t= 0;;
    

    currentWeaponCost: int32_t= 0;;
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
weaponProperties= partInterface!.getWeaponProperties();
    
downgradeWeaponCost= this.getWeaponPropertiesCost(this.createWeaponProperties(weaponProperties, rtsLayer!.getLevel() -1, rtsLayer!.getLevel()));
    
currentWeaponCost= this.getWeaponPropertiesCost(weaponProperties);
    
downgradeCost += (currentWeaponCost -downgradeWeaponCost);
    
}

downgradeCost= downgradeCost *9 /10;
    
this.logUtil!.putF(new StringMaker().append("Total Cost: ")!.appendint(downgradeCost)!.toString(), this, "getDowngradeCost");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return downgradeCost;
    
}


    public int32_t getUpgradeCost(RTSLayer rtsLayer){

    upgradeCost: int32_t = 0;;
    

    partInterfaceArray: std::vector<PartInterface> = rtsLayer!.getPartInterfaceArray()!;;
    

    size: int32_t = partInterfaceArray!.length
                ;;
    

    partInterface: BasicWeaponPart;;
    

    weaponProperties: WeaponProperties;;
    

    upgradedWeaponCost: int32_t= 0;;
    

    currentWeaponCost: int32_t= 0;;
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
weaponProperties= partInterface!.getWeaponProperties();
    
upgradedWeaponCost= this.getWeaponPropertiesCost(this.createWeaponProperties(weaponProperties, rtsLayer!.getLevel() +1, rtsLayer!.getLevel()));
    
currentWeaponCost= this.getWeaponPropertiesCost(weaponProperties);
    
upgradeCost += (upgradedWeaponCost -currentWeaponCost);
    
}

this.logUtil!.putF(new StringMaker().append("Total Cost: ")!.appendint(upgradeCost)!.toString(), this, "getUpgradeCost");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return upgradeCost;
    
}


                //@Throws(Exception.constructor)
            
    public destroyAndClear(BasicArrayList list){

    rtsLayer: RTSLayer;;
    




                        for (
    index: int32_t = list.size() -1;index >= 0; index--)
        {
rtsLayer= list.get(index) as RTSLayer;
    
rtsLayer!.setDestroyed(true);
    
}

list.clear();
    
}


    public Hashtable<any, any> createFakeRTSLayerHashtable(BaseRaceTrackGeographicMap baseRaceTrackGeographicMap){

    hashtable: Hashtable<any, any> = new Hashtable<any, any>();;
    

    layerManager: FakeLayerManager = new FakeLayerManager(GameInfo.NONE);;
    
layerManager!.setGeographicMapInterface(
                                                [
                                                    baseRaceTrackGeographicMap
                                                ]);
    
hashtable.put(AllBinaryGameLayerManager.ID, layerManager);
    
hashtable.put(DirectionFactory.getInstance()!.NAME, DirectionFactory.getInstance()!.LEFT);
    
hashtable.put(this.groupCommonFactory!.ID, BasicGroupFactory.getInstance()!.NONE_ARRAY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


};

            

