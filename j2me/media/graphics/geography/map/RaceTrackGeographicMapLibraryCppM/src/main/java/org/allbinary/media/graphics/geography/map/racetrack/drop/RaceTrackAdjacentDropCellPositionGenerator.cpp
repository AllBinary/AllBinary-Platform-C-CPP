
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
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/identification/GroupCommonFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/direction/Direction.h>

      
#include <org/allbinary/direction/DirectionFactory.h>

      
#include <org/allbinary/game/identification/BasicGroupFactory.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/layer/geographic/map/LayerCoveringCellPositionsUtil.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapDirectionUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionGeneratorInterface.h>

      
#include <org/allbinary/media/graphics/geography/map/drop/DropCellPositionHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/BaseRaceTrackGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RaceTrackDropCellPositionGenerator.h"
#include "RaceTrackAdjacentDropLayerFactory.h"

class RaceTrackAdjacentDropCellPositionGenerator: public RaceTrackDropCellPositionGenerator {

    private: static RaceTrackAdjacentDropCellPositionGenerator SINGLETON = RaceTrackAdjacentDropCellPositionGenerator();

    public: static DropCellPositionGeneratorInterface getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RaceTrackAdjacentDropCellPositionGenerator::SINGLETON;
    
}


    private: const LayerCoveringCellPositionsUtil layerCoveringCellPositionsUtil = LayerCoveringCellPositionsUtil::getInstance();

    private: const GroupCommonFactory groupCommonFactory = GroupCommonFactory::getInstance();

    private: std::vector<GeographicMapCellPosition> surroundingCellPositions = std::vector<GeographicMapCellPosition>(4);

private: RaceTrackAdjacentDropCellPositionGenerator(){
}


                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition getFirstNonRoadAdjacentCellPosition(int32_t column, int32_t row){

    GeographicMapCellPosition nonRoadGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;;
    

    BasicGeographicMapCellPositionFactory geographicMapCellPositionFactory = this->raceTrackGeographicMap.getGeographicMapCellPositionFactory();;
    
this->surroundingCellPositions[0]= geographicMapCellPositionFactory.getAt(column, row -1);
    
this->surroundingCellPositions[1]= geographicMapCellPositionFactory.getAt(column, row +1);
    
this->surroundingCellPositions[2]= geographicMapCellPositionFactory.getAt(column -1, row);
    
this->surroundingCellPositions[3]= geographicMapCellPositionFactory.getAt(column +1, row);
    

    BaseRaceTrackGeographicMap baseRaceTrackGeographicMap = this->raceTrackGeographicMap;;
    

    RaceTrackGeographicMapCellTypeFactory raceTrackGeographicMapCellTypeFactory = baseRaceTrackGeographicMap.getGeographicMapCellTypeFactory();;
    

    GeographicMapCellPosition geographicMapCellPosition;;
    

    RaceTrackGeographicMapCellType raceTrackGeographicMapCellType;;
    




                        for (
    int32_t index = this->surroundingCellPositions.size();--index >= 0; )
        {
geographicMapCellPosition= this->surroundingCellPositions[index];
    
raceTrackGeographicMapCellType= this->raceTrackGeographicMap.getCellTypeAt(geographicMapCellPosition);
    

                        if(!raceTrackGeographicMapCellTypeFactory.isPath(raceTrackGeographicMapCellType))
                        
                                    {
                                    nonRoadGeographicMapCellPosition= geographicMapCellPosition;
    
break;

                    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nonRoadGeographicMapCellPosition;
    
}


    private: const ABHashtable<Object*, Object*> hashtable = StdUtil::getInstance().createHashtable();

                //@Throws(Exception.constructor)
            
    public: void update(AllBinaryGameLayerManager allBinaryGameLayerManager, BasicGeographicMap geographicMapInterface){
this->hashtable.put(AllBinaryGameLayerManager::ID, allBinaryGameLayerManager);
    
super.update(allBinaryGameLayerManager, geographicMapInterface);
    
}


    private: const GeographicMapDirectionUtil geographicMapDirectionUtil = GeographicMapDirectionUtil::getInstance();

                //@Throws(Exception.constructor)
            
    protected: void drop(AllBinaryLayerManager allBinaryLayerManager, int32_t index){

    GeographicMapCellPosition geographicMapCellPosition = this->list.get(index);;
    

    GeographicMapCellPosition randomGeographicMapCellPosition = this->getFirstNonRoadAdjacentCellPosition(geographicMapCellPosition.getColumn(), geographicMapCellPosition.getRow());;
    

                        if(randomGeographicMapCellPosition == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    DropCellPositionHistory dropCellPositionHistory = DropCellPositionHistory::getInstance();;
    

                        if(!dropCellPositionHistory.isCellPositionWithDrop(geographicMapCellPosition))
                        
                                    {
                                    
    Direction direction = this->geographicMapDirectionUtil.getDirectionFromCellPositionToAdjacentCellPosition(randomGeographicMapCellPosition, geographicMapCellPosition);;
    

    Object* objectCanBeNull = this->hashtable.get(this->groupCommonFactory.ID);;
    

                        if(objectCanBeNull != 
                                    nullptr
                                )
                        
                                    {
                                    
                                    }
                                
                        else {
                            this->hashtable.put(this->groupCommonFactory.ID, BasicGroupFactory::getInstance().NONE_ARRAY);
    

                        }
                            
this->hashtable.put(DirectionFactory::getInstance().NAME, direction);
    

    GPoint point = randomGeographicMapCellPosition.getPoint();;
    

    int32_t x = point.getX();;
    

    int32_t y = point.getY();;
    

    int32_t z = point.getZ();;
    

    AllBinaryLayer layerInterface = RaceTrackAdjacentDropLayerFactory::getInstance().getRandomInstance().getNextInstance(hashtable, x, y, z);;
    

    BaseRaceTrackGeographicMap baseRaceTrackGeographicMap = this->raceTrackGeographicMap;;
    

    BasicArrayList list = this->layerCoveringCellPositionsUtil.getAll(baseRaceTrackGeographicMap, randomGeographicMapCellPosition, layerInterface, BasicArrayListD());;
    

                        if(dropCellPositionHistory.anyCellPositionWithDrop(list))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    GeographicMapCellType geographicMapCellType;;
    




                        for (
    int32_t index2 = list.size();--index2 >= 0; )
        {
geographicMapCellType= this->raceTrackGeographicMap.getCellTypeAt(list.get(index2));
    

                        if(this->raceTrackGeographicMapCellTypeFactory.isPath(geographicMapCellType))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
}

dropCellPositionHistory.addAll(list, layerInterface);
    
allBinaryLayerManager.append(layerInterface);
    

                                    }
                                
}


};

            

