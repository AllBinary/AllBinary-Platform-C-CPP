
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RTSLAYERUTIL_CPP
        #define ORG_ALLBINARY_GAME_LAYER_RTSLAYERUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/RTSLayerUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/FakeLayerManager.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"


RTSLayerUtil::RTSLayerUtil() : logUtil(LogUtil::getInstance()), groupCommonFactory(GroupCommonFactory::getInstance()), MAX_RELOAD_TIME(Integer.MAX_VALUE /100000) {
        }
        auto RTSLayerUtil::instance_owner() -> RTSLayerUtil* { static std::unique_ptr<RTSLayerUtil> value(new RTSLayerUtil()); return value.get(); }
RTSLayerUtil* RTSLayerUtil::instance = RTSLayerUtil::instance_owner();

    auto RTSLayerUtil::getInstance() -> RTSLayerUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RTSLayerUtil::instance;
    
}


    auto RTSLayerUtil::createWeaponProperties(WeaponProperties* weaponProperties, int32_t currentLevel, int32_t lastLevel) -> WeaponProperties*{

    int64_t reloadTime = weaponProperties->getReloadTime();;
    

                        if(lastLevel > currentLevel)
                        
                                    {
                                    reloadTime= reloadTime +50;
    

                                    }
                                
                             else 
                        if(lastLevel < currentLevel)
                        
                                    {
                                    reloadTime= reloadTime -50;
    

                                    }
                                

    WeaponProperties* newWeaponProperties = new WeaponProperties(reloadTime, weaponProperties->getTargetingTime(), weaponProperties->getSpeed()->getUnscaled(), weaponProperties->getDamage() /lastLevel *currentLevel, weaponProperties->getDissipation());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return newWeaponProperties;
    
}


    auto RTSLayerUtil::downgrade(RTSLayer* rtsLayer) -> void{
rtsLayer->setLevel(rtsLayer->getLevel() -1);
    

    std::vector<PartInterface*> partInterfaceArray = rtsLayer->getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    BasicWeaponPart* partInterface;;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
partInterface= dynamic_cast<BasicWeaponPart*>(partInterfaceArray[index]);
    
partInterface->setWeaponProperties(this->createWeaponProperties(partInterface->getWeaponProperties(), rtsLayer->getLevel(), rtsLayer->getLevel() +1));
    
}

rtsLayer->select();
    
}


    auto RTSLayerUtil::upgrade(RTSLayer* rtsLayer) -> void{
rtsLayer->setLevel(rtsLayer->getLevel() +1);
    

    std::vector<PartInterface*> partInterfaceArray = rtsLayer->getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    BasicWeaponPart* partInterface;;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
partInterface= dynamic_cast<BasicWeaponPart*>(partInterfaceArray[index]);
    
partInterface->setWeaponProperties(this->createWeaponProperties(partInterface->getWeaponProperties(), rtsLayer->getLevel(), rtsLayer->getLevel() -1));
    
}

rtsLayer->select();
    
}


    auto RTSLayerUtil::getCostExponential(int64_t cost) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ((cost *cost *cost) /(cost *1000));
    
}


    auto RTSLayerUtil::getWeaponPropertiesCost(WeaponProperties* weaponProperties) -> int32_t{

    int64_t cost = (weaponProperties->getDamage() +weaponProperties->getRange() +((this->MAX_RELOAD_TIME /weaponProperties->getReloadTime())>>1));;
    
cost= this->getCostExponential(cost);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>(cost);
    
}


    auto RTSLayerUtil::getCost(RTSLayer* rtsLayer) -> int32_t{

    int32_t total = 0;;
    

    std::vector<PartInterface*> partInterfaceArray = rtsLayer->getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    BasicWeaponPart* partInterface;;
    

    WeaponProperties* weaponProperties;;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
partInterface= dynamic_cast<BasicWeaponPart*>(partInterfaceArray[index]);
    
weaponProperties= partInterface->getWeaponProperties();
    
total += this->getWeaponPropertiesCost(weaponProperties);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return total;
    
}


    auto RTSLayerUtil::getDowngradeCost(RTSLayer* rtsLayer) -> int32_t{

    std::vector<PartInterface*> partInterfaceArray = rtsLayer->getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    int32_t downgradeCost = 0;;
    

    BasicWeaponPart* partInterface;;
    

    WeaponProperties* weaponProperties;;
    

    int32_t downgradeWeaponCost= 0;;
    

    int32_t currentWeaponCost= 0;;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
partInterface= dynamic_cast<BasicWeaponPart*>(partInterfaceArray[index]);
    
weaponProperties= partInterface->getWeaponProperties();
    
downgradeWeaponCost= this->getWeaponPropertiesCost(this->createWeaponProperties(weaponProperties, rtsLayer->getLevel() -1, rtsLayer->getLevel()));
    
currentWeaponCost= this->getWeaponPropertiesCost(weaponProperties);
    
downgradeCost += (currentWeaponCost -downgradeWeaponCost);
    
}

downgradeCost= downgradeCost *9 /10;
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("Total Cost: ")->appendint(downgradeCost)), this, "getDowngradeCost");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return downgradeCost;
    
}


    auto RTSLayerUtil::getUpgradeCost(RTSLayer* rtsLayer) -> int32_t{

    int32_t upgradeCost = 0;;
    

    std::vector<PartInterface*> partInterfaceArray = rtsLayer->getPartInterfaceArray();;
    

    int32_t size = partInterfaceArray.size();;
    

    BasicWeaponPart* partInterface;;
    

    WeaponProperties* weaponProperties;;
    

    int32_t upgradedWeaponCost= 0;;
    

    int32_t currentWeaponCost= 0;;
    




                        for (
    int32_t index = size -1;index >= 0; index--)
        {
partInterface= dynamic_cast<BasicWeaponPart*>(partInterfaceArray[index]);
    
weaponProperties= partInterface->getWeaponProperties();
    
upgradedWeaponCost= this->getWeaponPropertiesCost(this->createWeaponProperties(weaponProperties, rtsLayer->getLevel() +1, rtsLayer->getLevel()));
    
currentWeaponCost= this->getWeaponPropertiesCost(weaponProperties);
    
upgradeCost += (upgradedWeaponCost -currentWeaponCost);
    
}

this->logUtil->putF(JavaString::valueOf((new StringMaker())->append("Total Cost: ")->appendint(upgradeCost)), this, "getUpgradeCost");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return upgradeCost;
    
}


                //@Throws(Exception.constructor)
            
    auto RTSLayerUtil::destroyAndClear(BasicArrayList* list) -> void{

    RTSLayer* rtsLayer;;
    




                        for (
    int32_t index = list->size() -1;index >= 0; index--)
        {
rtsLayer= dynamic_cast<RTSLayer*>(list->get(index));
    
rtsLayer->setDestroyed(true);
    
}

list->clear();
    
}


    auto RTSLayerUtil::createFakeRTSLayerHashtable(BaseRaceTrackGeographicMap* baseRaceTrackGeographicMap) -> ABHashtable<Object*, Object*>*{

    ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();;
    

    FakeLayerManager* layerManager = new FakeLayerManager(GameInfo::NONE);;
    
layerManager->setGeographicMapInterface(std::vector<BasicGeographicMap*>
                                                {
                                                    baseRaceTrackGeographicMap
                                                });
    
hashtable->put(AllBinaryGameLayerManager::ID, layerManager);
    
hashtable->put(DirectionFactory::getInstance()->NAME, DirectionFactory::getInstance()->LEFT);
    
hashtable->put(this->groupCommonFactory->ID, BasicGroupFactory::getInstance()->NONE_ARRAY);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashtable;
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_RTSLAYERUTIL_CPP
