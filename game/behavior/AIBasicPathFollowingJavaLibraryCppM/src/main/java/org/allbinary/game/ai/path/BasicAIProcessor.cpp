
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/math/AngleInfo.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>

      
#include <org/allbinary/media/graphics/geography/pathfinding/GeographicMapCellPathHistoryInfo.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicDirectionAIHelper.h"

class BasicAIProcessor
            : public Object
         {
        

    private: name: string;

    private: geographicMapCellHistory: GeographicMapCellHistory;

    private: geographicMapCellPositionBasicArrayList: BasicArrayList;

    private: geographicMapCellPathHistoryInfo: GeographicMapCellPathHistoryInfo;

    private: basicAI: BasicDirectionAIHelper;

public constructor (string name, GeographicMapCellHistory geographicMapCellHistory, GeographicMapCellPathHistoryInfo geographicMapCellPathHistoryInfo, BasicArrayList chosenPathList, AngleInfo angleInfo, int32_t seed){

            super();
        this.name= name;
    
this.geographicMapCellHistory= geographicMapCellHistory;
    
this.geographicMapCellPositionBasicArrayList= chosenPathList;
    
this.geographicMapCellPathHistoryInfo= geographicMapCellPathHistoryInfo;
    
this.setName(name);
    
this.setNewPath(geographicMapCellHistory, chosenPathList);
    
this.basicAI= new BasicDirectionAIHelper(this.getName(), angleInfo);
    
}


    setNewPath(GeographicMapCellHistory geographicMapCellHistory, BasicArrayList chosenPathList){
this.setGeographicMapCellHistory(geographicMapCellHistory);
    
this.geographicMapCellPositionBasicArrayList= chosenPathList;
    
this.init();
    
}


    public init(){
this.geographicMapCellPathHistoryInfo= new GeographicMapCellPathHistoryInfo();
    
this.geographicMapCellPathHistoryInfo!.setPreviousOnPathGeographicMapCellPosition(this.geographicMapCellPositionBasicArrayList!.get(this.geographicMapCellPositionBasicArrayList!.size() -1) as GeographicMapCellPosition);
    
this.geographicMapCellPathHistoryInfo!.setNextOnPathGeographicMapCellPosition(this.geographicMapCellPositionBasicArrayList!.get(this.geographicMapCellPositionBasicArrayList!.size() -1) as GeographicMapCellPosition);
    
this.update();
    
}


    private: const geographicMapDirectionUtil: GeographicMapDirectionUtil = GeographicMapDirectionUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    int32_t goTowardNextChosenOnPathPosition(GeographicMapCellPosition currentGeographicMapCellPosition){

    keyDirection: int32_t =  -1;;
    

    goToGeographicMapCellPosition: GeographicMapCellPosition = this.geographicMapCellPathHistoryInfo!.getNextChosenOnPathGeographicMapCellPosition()!;;
    

    geographicMapDirectionData: Direction = this.geographicMapDirectionUtil!.getDirectionFromCellPositionToAdjacentCellPosition(currentGeographicMapCellPosition, goToGeographicMapCellPosition)!;;
    

                        if(geographicMapDirectionData == DirectionFactory.getInstance()!.NOT_BORDERED_WITH)
                        
                                    {
                                    geographicMapDirectionData= this.geographicMapDirectionUtil!.getDirectionFromCellPositionToCellPosition(currentGeographicMapCellPosition, goToGeographicMapCellPosition);
    

                                    }
                                
keyDirection= this.basicAI!.getAIKeyPressedFromDirection(geographicMapDirectionData);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keyDirection;
    
}


    update(){
this.geographicMapCellPathHistoryInfo!.setNextUnvisitedOnPathGeographicMapCellPosition(this.getGeographicMapCellHistory()!.getFirstUnvisited());
    
this.geographicMapCellPathHistoryInfo!.setNextChosenOnPathGeographicMapCellPosition(this.geographicMapCellPathHistoryInfo!.getNextUnvisitedOnPathGeographicMapCellPosition());
    
}


                //@Throws(Exception.constructor)
            
    public int32_t processAI(AllBinaryLayerManager myManager, GeographicMapCellPosition currentGeographicMapCellPosition){

    keyDirection: int32_t =  -1;;
    

                        if(this.geographicMapCellPositionBasicArrayList!.contains(currentGeographicMapCellPosition))
                        
                                    {
                                    this.update();
    
keyDirection= this.goTowardNextChosenOnPathPosition(currentGeographicMapCellPosition);
    
this.geographicMapCellPathHistoryInfo!.setPreviousOnPathGeographicMapCellPosition(currentGeographicMapCellPosition);
    

                                    }
                                
                        else {
                            keyDirection= this.goTowardNextChosenOnPathPosition(currentGeographicMapCellPosition);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keyDirection;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setName(string name){
this.name= name;
    
}


    public GeographicMapCellPathHistoryInfo getGeographicMapCellPathHistoryInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellPathHistoryInfo;
    
}


    public setGeographicMapCellPathHistoryInfo(GeographicMapCellPathHistoryInfo geographicMapCellPathHistoryInfo){
this.geographicMapCellPathHistoryInfo= geographicMapCellPathHistoryInfo;
    
}


    public GeographicMapCellHistory getGeographicMapCellHistory(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.geographicMapCellHistory;
    
}


    public setGeographicMapCellHistory(GeographicMapCellHistory geographicMapCellHistory){
this.geographicMapCellHistory= geographicMapCellHistory;
    
}


};

            

