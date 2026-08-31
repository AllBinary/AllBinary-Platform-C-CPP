
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
        



#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PlayerOwnedRTSLayers.h"
#include "RTSLayer.h"
#include "AllBinaryGameLayer.h"

class AdvancedPlayerOwnedRTSLayers: public PlayerOwnedRTSLayers {
        

    private: const unitsList: BasicArrayList = new BasicArrayListD();

    private: const waypointsList: BasicArrayList = new BasicArrayListD();

    private: const buildingList: BasicArrayList = new BasicArrayListD();

    private: const baseList: BasicArrayList = new BasicArrayListD();

    private: const garrisonList: BasicArrayList = new BasicArrayListD();

    private: const houseList: BasicArrayList = new BasicArrayListD();

    private: const labList: BasicArrayList = new BasicArrayListD();

    private: const factoryList: BasicArrayList = new BasicArrayListD();

    public addUnit(RTSLayer rtsLayer){
this.unitsList!.add(rtsLayer);
    
this.rtsLayerList!.add(rtsLayer);
    
}


    public addWaypoint(RTSLayer rtsLayer){
this.waypointsList!.add(rtsLayer);
    
this.rtsLayerList!.add(rtsLayer);
    
}


    public addBase(RTSLayer rtsLayer){
this.baseList!.add(rtsLayer);
    
this.buildingList!.add(rtsLayer);
    
this.rtsLayerList!.add(rtsLayer);
    
}


    public addGarrison(RTSLayer rtsLayer){
this.garrisonList!.add(rtsLayer);
    
this.buildingList!.add(rtsLayer);
    
this.rtsLayerList!.add(rtsLayer);
    
}


    public addHouse(RTSLayer rtsLayer){
this.houseList!.add(rtsLayer);
    
this.buildingList!.add(rtsLayer);
    
this.rtsLayerList!.add(rtsLayer);
    
}


    public addLab(RTSLayer rtsLayer){
this.labList!.add(rtsLayer);
    
this.buildingList!.add(rtsLayer);
    
this.rtsLayerList!.add(rtsLayer);
    
}


    public addFactory(RTSLayer rtsLayer){
this.factoryList!.add(rtsLayer);
    
this.buildingList!.add(rtsLayer);
    
this.rtsLayerList!.add(rtsLayer);
    
}


    public removeUnit(AllBinaryGameLayer gameLayer){
this.unitsList!.remove(gameLayer);
    
this.rtsLayerList!.remove(gameLayer);
    
}


    public removeWaypoint(AllBinaryGameLayer gameLayer){
this.waypointsList!.remove(gameLayer);
    
this.rtsLayerList!.remove(gameLayer);
    
}


    public BasicArrayList getUnitsList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.unitsList;
    
}


    public BasicArrayList getWaypointsList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.waypointsList;
    
}


    public BasicArrayList getBaseList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.baseList;
    
}


    public BasicArrayList getGarrisonList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.garrisonList;
    
}


    public BasicArrayList getHouseList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.houseList;
    
}


    public BasicArrayList getLabList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.labList;
    
}


    public BasicArrayList getFactoryList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.factoryList;
    
}


    public int32_t getTotalBuildings(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.baseList!.size() +this.garrisonList!.size() +this.houseList!.size() +this.labList!.size() +this.factoryList!.size();
    
}


    public removeBuilding(AllBinaryGameLayer layerInterface){
this.buildingList!.add(layerInterface);
    

                        if(this.getBaseList()!.remove(layerInterface))
                        
                                    {
                                    this.rtsLayerList!.remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this.getFactoryList()!.remove(layerInterface))
                        
                                    {
                                    this.rtsLayerList!.remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this.getGarrisonList()!.remove(layerInterface))
                        
                                    {
                                    this.rtsLayerList!.remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this.getLabList()!.remove(layerInterface))
                        
                                    {
                                    this.rtsLayerList!.remove(layerInterface);
    

                                    }
                                
                             else 
                        if(this.getHouseList()!.remove(layerInterface))
                        
                                    {
                                    this.rtsLayerList!.remove(layerInterface);
    

                                    }
                                
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(super.toString());
    
stringBuffer!.append(" Bases: ");
    
stringBuffer!.appendint(this.getBaseList()!.size());
    
stringBuffer!.append(" Factory: ");
    
stringBuffer!.appendint(this.getFactoryList()!.size());
    
stringBuffer!.append(" Garrison: ");
    
stringBuffer!.appendint(this.getGarrisonList()!.size());
    
stringBuffer!.append(" Labs: ");
    
stringBuffer!.appendint(this.getLabList()!.size());
    
stringBuffer!.append(" Houses: ");
    
stringBuffer!.appendint(this.getHouseList()!.size());
    
stringBuffer!.append(" Waypoints: ");
    
stringBuffer!.appendint(this.getWaypointsList()!.size());
    
stringBuffer!.append(" Units: ");
    
stringBuffer!.appendint(this.getUnitsList()!.size());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public BasicArrayList getBuildingList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.buildingList;
    
}


};

            

