
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
        



            #include <vector>
        
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

      
#include <org/allbinary/logic/StdUtil.h>

      
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

    private: static RTSLayerUtil instance() { return RTSLayerUtil(); }

    public: static RTSLayerUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RTSLayerUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GroupCommonFactory groupCommonFactory = GroupCommonFactory::getInstance();

    private: WeaponProperties createWeaponProperties(WeaponProperties weaponProperties, int32_t currentLevel, int32_t lastLevel){

    int64_t reloadTime = weaponProperties.getReloadTime();;
    

                        if(lastLevel > currentLevel)
                        
                                    {
                                    reloadTime= reloadTime +50;
    

                                    }
                                
                             else 
                        if(lastLevel < currentLevel)
                        
                                    {
                                    reloadTime= reloadTime -50;
    

                                    }
                                

    WeaponProperties newWeaponProperties = WeaponProperties(reloadTime, weaponProperties.getTargetingTime(), weaponProperties.getSpeed().getUnscaled(), weaponProperties.getDamage() /lastLevel *currentLevel, weaponProperties.getDissipation());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newWeaponProperties;
    
}


    public: void downgrade(RTSLayer rtsLayer){
rtsLayer.setLevel(rtsLayer.getLevel() -1);
    

    std::vector<PartInterface> partInterfaceArray = rtsLayer.getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    BasicWeaponPart partInterface;;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
partInterface.setWeaponProperties(this->createWeaponProperties(partInterface.getWeaponProperties(), rtsLayer.getLevel(), rtsLayer.getLevel() +1));
    
}

rtsLayer.select();
    
}


    public: void upgrade(RTSLayer rtsLayer){
rtsLayer.setLevel(rtsLayer.getLevel() +1);
    

    std::vector<PartInterface> partInterfaceArray = rtsLayer.getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    BasicWeaponPart partInterface;;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
partInterface.setWeaponProperties(this->createWeaponProperties(partInterface.getWeaponProperties(), rtsLayer.getLevel(), rtsLayer.getLevel() -1));
    
}

rtsLayer.select();
    
}


    private: const int64_t MAX_RELOAD_TIME = Integer::MAX_VALUE /100000;

    public: int64_t getCostExponential(int64_t cost){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ((cost *cost *cost) /(cost *1000));
    
}


    private: int32_t getWeaponPropertiesCost(WeaponProperties weaponProperties){

    int64_t cost = (weaponProperties.getDamage() +weaponProperties.getRange() +((this->MAX_RELOAD_TIME /weaponProperties.getReloadTime())>>1));;
    
cost= this->getCostExponential(cost);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(cost);
    
}


    public: int32_t getCost(RTSLayer rtsLayer){

    int32_t total = 0;;
    

    std::vector<PartInterface> partInterfaceArray = rtsLayer.getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    BasicWeaponPart partInterface;;
    

    WeaponProperties weaponProperties;;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
weaponProperties= partInterface.getWeaponProperties();
    
total += this->getWeaponPropertiesCost(weaponProperties);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return total;
    
}


    public: int32_t getDowngradeCost(RTSLayer rtsLayer){

    std::vector<PartInterface> partInterfaceArray = rtsLayer.getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    int32_t downgradeCost = 0;;
    

    BasicWeaponPart partInterface;;
    

    WeaponProperties weaponProperties;;
    

    int32_t downgradeWeaponCost= 0;;
    

    int32_t currentWeaponCost= 0;;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
weaponProperties= partInterface.getWeaponProperties();
    
downgradeWeaponCost= this->getWeaponPropertiesCost(this->createWeaponProperties(weaponProperties, rtsLayer.getLevel() -1, rtsLayer.getLevel()));
    
currentWeaponCost= this->getWeaponPropertiesCost(weaponProperties);
    
downgradeCost += (currentWeaponCost -downgradeWeaponCost);
    
}

downgradeCost= downgradeCost *9 /10;
    
this->logUtil.putF(StringMaker().append("Total Cost: ").appendint(downgradeCost).toString(), this, "getDowngradeCost");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return downgradeCost;
    
}


    public: int32_t getUpgradeCost(RTSLayer rtsLayer){

    int32_t upgradeCost = 0;;
    

    std::vector<PartInterface> partInterfaceArray = rtsLayer.getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    BasicWeaponPart partInterface;;
    

    WeaponProperties weaponProperties;;
    

    int32_t upgradedWeaponCost= 0;;
    

    int32_t currentWeaponCost= 0;;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
partInterface= partInterfaceArray[index]! as BasicWeaponPart;
    
weaponProperties= partInterface.getWeaponProperties();
    
upgradedWeaponCost= this->getWeaponPropertiesCost(this->createWeaponProperties(weaponProperties, rtsLayer.getLevel() +1, rtsLayer.getLevel()));
    
currentWeaponCost= this->getWeaponPropertiesCost(weaponProperties);
    
upgradeCost += (upgradedWeaponCost -currentWeaponCost);
    
}

this->logUtil.putF(StringMaker().append("Total Cost: ").appendint(upgradeCost).toString(), this, "getUpgradeCost");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return upgradeCost;
    
}


                //@Throws(Exception.constructor)
            
    public: void destroyAndClear(BasicArrayList list){

    RTSLayer rtsLayer;;
    




                        for (
    int32_t index = list.size() -1;index >= 0; index--)
        {
rtsLayer= list.get(index) as RTSLayer;
    
rtsLayer.setDestroyed(true);
    
}

list.clear();
    
}


    public: Hashtable<any, any> createFakeRTSLayerHashtable(BaseRaceTrackGeographicMap baseRaceTrackGeographicMap){

    Hashtable<any, any> hashtable = StdUtil::getInstance().createHashtable();;
    

    FakeLayerManager layerManager = FakeLayerManager(GameInfo::NONE);;
    
layerManager.setGeographicMapInterface(
                                                {
                                                    baseRaceTrackGeographicMap
                                                });
    
hashtable.put(AllBinaryGameLayerManager::ID, layerManager);
    
hashtable.put(DirectionFactory::getInstance().NAME, DirectionFactory::getInstance().LEFT);
    
hashtable.put(this->groupCommonFactory.ID, BasicGroupFactory::getInstance().NONE_ARRAY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


};

            

