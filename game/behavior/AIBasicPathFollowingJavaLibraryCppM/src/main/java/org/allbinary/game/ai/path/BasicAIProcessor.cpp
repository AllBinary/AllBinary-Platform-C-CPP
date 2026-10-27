
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
        



        #ifndef ORG_ALLBINARY_GAME_AI_PATH_BASICAIPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_AI_PATH_BASICAIPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ai/path/BasicAIProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/game/ai/path/BasicDirectionAIHelper.h"


BasicAIProcessor::BasicAIProcessor(std::string name, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPathHistoryInfo* geographicMapCellPathHistoryInfo, BasicArrayList* chosenPathList, AngleInfo* angleInfo, int32_t seed) : geographicMapDirectionUtil(GeographicMapDirectionUtil::getInstance()){
this->name= name;
    
this->geographicMapCellHistory= geographicMapCellHistory;
    
this->geographicMapCellPositionBasicArrayList= chosenPathList;
    
this->geographicMapCellPathHistoryInfo= geographicMapCellPathHistoryInfo;
    
this->setName(name);
    
this->setNewPath(geographicMapCellHistory, chosenPathList);
    
this->basicAI= new BasicDirectionAIHelper(this->getName(), angleInfo);
    
}


    auto BasicAIProcessor::setNewPath(GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* chosenPathList) -> void{
this->setGeographicMapCellHistory(geographicMapCellHistory);
    
this->geographicMapCellPositionBasicArrayList= chosenPathList;
    
this->init();
    
}


    auto BasicAIProcessor::init() -> void{
this->geographicMapCellPathHistoryInfo= new GeographicMapCellPathHistoryInfo();
    
this->geographicMapCellPathHistoryInfo->setPreviousOnPathGeographicMapCellPosition(dynamic_cast<GeographicMapCellPosition*>(this->geographicMapCellPositionBasicArrayList->get(this->geographicMapCellPositionBasicArrayList->size() -1)));
    
this->geographicMapCellPathHistoryInfo->setNextOnPathGeographicMapCellPosition(dynamic_cast<GeographicMapCellPosition*>(this->geographicMapCellPositionBasicArrayList->get(this->geographicMapCellPositionBasicArrayList->size() -1)));
    
this->update();
    
}


                //@Throws(Exception.constructor)
            
    auto BasicAIProcessor::goTowardNextChosenOnPathPosition(GeographicMapCellPosition* currentGeographicMapCellPosition) -> int32_t{

    int32_t keyDirection =  -1;;
    

    GeographicMapCellPosition* goToGeographicMapCellPosition = this->geographicMapCellPathHistoryInfo->getNextChosenOnPathGeographicMapCellPosition();;
    

    Direction* geographicMapDirectionData = this->geographicMapDirectionUtil->getDirectionFromCellPositionToAdjacentCellPosition(currentGeographicMapCellPosition, goToGeographicMapCellPosition);;
    

                        if(geographicMapDirectionData == DirectionFactory::getInstance()->NOT_BORDERED_WITH)
                        
                                    {
                                    geographicMapDirectionData= this->geographicMapDirectionUtil->getDirectionFromCellPositionToCellPosition(currentGeographicMapCellPosition, goToGeographicMapCellPosition);
    

                                    }
                                
keyDirection= this->basicAI->getAIKeyPressedFromDirection(geographicMapDirectionData);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keyDirection;
    
}


    auto BasicAIProcessor::update() -> void{
this->geographicMapCellPathHistoryInfo->setNextUnvisitedOnPathGeographicMapCellPosition(this->getGeographicMapCellHistory()->getFirstUnvisited());
    
this->geographicMapCellPathHistoryInfo->setNextChosenOnPathGeographicMapCellPosition(this->geographicMapCellPathHistoryInfo->getNextUnvisitedOnPathGeographicMapCellPosition());
    
}


                //@Throws(Exception.constructor)
            
    auto BasicAIProcessor::processAI(AllBinaryLayerManager* myManager, GeographicMapCellPosition* currentGeographicMapCellPosition) -> int32_t{

    int32_t keyDirection =  -1;;
    

                        if(this->geographicMapCellPositionBasicArrayList->contains(currentGeographicMapCellPosition))
                        
                                    {
                                    this->update();
    
keyDirection= this->goTowardNextChosenOnPathPosition(currentGeographicMapCellPosition);
    
this->geographicMapCellPathHistoryInfo->setPreviousOnPathGeographicMapCellPosition(currentGeographicMapCellPosition);
    

                                    }
                                
                        else {
                            keyDirection= this->goTowardNextChosenOnPathPosition(currentGeographicMapCellPosition);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return keyDirection;
    
}


    auto BasicAIProcessor::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    auto BasicAIProcessor::setName(std::string name) -> void{
this->name= name;
    
}


    auto BasicAIProcessor::getGeographicMapCellPathHistoryInfo() -> GeographicMapCellPathHistoryInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellPathHistoryInfo;
    
}


    auto BasicAIProcessor::setGeographicMapCellPathHistoryInfo(GeographicMapCellPathHistoryInfo* geographicMapCellPathHistoryInfo) -> void{
this->geographicMapCellPathHistoryInfo= geographicMapCellPathHistoryInfo;
    
}


    auto BasicAIProcessor::getGeographicMapCellHistory() -> GeographicMapCellHistory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->geographicMapCellHistory;
    
}


    auto BasicAIProcessor::setGeographicMapCellHistory(GeographicMapCellHistory* geographicMapCellHistory) -> void{
this->geographicMapCellHistory= geographicMapCellHistory;
    
}




        #endif //ORG_ALLBINARY_GAME_AI_PATH_BASICAIPROCESSOR_CPP
