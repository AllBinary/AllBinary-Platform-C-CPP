
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2006 AllBinary 
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/PlayerOwnedRTSLayers.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"

class AdvancedPlayerOwnedRTSLayers: public PlayerOwnedRTSLayers {

    private: BasicArrayList* unitsList = new BasicArrayListD();

    private: BasicArrayList* waypointsList = new BasicArrayListD();

    private: BasicArrayList* buildingList = new BasicArrayListD();

    private: BasicArrayList* baseList = new BasicArrayListD();

    private: BasicArrayList* garrisonList = new BasicArrayListD();

    private: BasicArrayList* houseList = new BasicArrayListD();

    private: BasicArrayList* labList = new BasicArrayListD();

    private: BasicArrayList* factoryList = new BasicArrayListD();

    public: void addUnit(RTSLayer* rtsLayer){
this->unitsList->add(rtsLayer);
    
this->rtsLayerList.add(rtsLayer);
    
}


    public: void addWaypoint(RTSLayer* rtsLayer){
this->waypointsList->add(rtsLayer);
    
this->rtsLayerList.add(rtsLayer);
    
}


    public: void addBase(RTSLayer* rtsLayer){
this->baseList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList.add(rtsLayer);
    
}


    public: void addGarrison(RTSLayer* rtsLayer){
this->garrisonList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList.add(rtsLayer);
    
}


    public: void addHouse(RTSLayer* rtsLayer){
this->houseList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList.add(rtsLayer);
    
}


    public: void addLab(RTSLayer* rtsLayer){
this->labList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList.add(rtsLayer);
    
}


    public: void addFactory(RTSLayer* rtsLayer){
this->factoryList->add(rtsLayer);
    
this->buildingList->add(rtsLayer);
    
this->rtsLayerList.add(rtsLayer);
    
}


    public: void removeUnit(AllBinaryGameLayer* gameLayer){
this->unitsList->remove(gameLayer);
    
this->rtsLayerList.remove(gameLayer);
    
}


    public: void removeWaypoint(AllBinaryGameLayer* gameLayer){
this->waypointsList->remove(gameLayer);
    
this->rtsLayerList.remove(gameLayer);
    
}


    public: BasicArrayList* getUnitsList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->unitsList;
    
}


    public: BasicArrayList* getWaypointsList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->waypointsList;
    
}


    public: BasicArrayList* getBaseList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->baseList;
    
}


    public: BasicArrayList* getGarrisonList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->garrisonList;
    
}


    public: BasicArrayList* getHouseList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->houseList;
    
}


    public: BasicArrayList* getLabList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->labList;
    
}


    public: BasicArrayList* getFactoryList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->factoryList;
    
}


    public: int32_t getTotalBuildings(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->baseList->size() +this->garrisonList->size() +this->houseList->size() +this->labList->size() +this->factoryList->size();
    
}


    public: void removeBuilding(AllBinaryGameLayer* layerInterface){
this->buildingList->add(layerInterface);
    

                        if(this->getBaseList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList.remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this->getFactoryList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList.remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this->getGarrisonList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList.remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this->getLabList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList.remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this->getHouseList()->remove(layerInterface))
                        
                                    {
                                    this->rtsLayerList.remove(layerInterface);
    

                                    }
                                
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(super.toString());
    
stringBuffer->append(" Bases: ");
    
stringBuffer->appendint(this->getBaseList()->size());
    
stringBuffer->append(" Factory: ");
    
stringBuffer->appendint(this->getFactoryList()->size());
    
stringBuffer->append(" Garrison: ");
    
stringBuffer->appendint(this->getGarrisonList()->size());
    
stringBuffer->append(" Labs: ");
    
stringBuffer->appendint(this->getLabList()->size());
    
stringBuffer->append(" Houses: ");
    
stringBuffer->appendint(this->getHouseList()->size());
    
stringBuffer->append(" Waypoints: ");
    
stringBuffer->appendint(this->getWaypointsList()->size());
    
stringBuffer->append(" Units: ");
    
stringBuffer->appendint(this->getUnitsList()->size());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: BasicArrayList* getBuildingList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->buildingList;
    
}


};

            

