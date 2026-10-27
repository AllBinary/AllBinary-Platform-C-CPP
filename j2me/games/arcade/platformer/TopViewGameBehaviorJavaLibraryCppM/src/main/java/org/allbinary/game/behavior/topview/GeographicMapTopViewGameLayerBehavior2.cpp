
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR2_CPP
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR2_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/behavior/topview/GeographicMapTopViewGameLayerBehavior2.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/physics/acceleration/GravityUtil.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
#include <org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/GeographicMapTopViewLayerBehavior.h"
#include "org/allbinary/game/behavior/topview/TopViewCharacterInterface.h"


GeographicMapTopViewGameLayerBehavior2::GeographicMapTopViewGameLayerBehavior2(int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY) : GeographicMapTopViewLayerBehavior(maxGravityActionIndex), gravityUtil(GravityUtil::getInstance()), geographicMapBehavior(new MultiGeographicMapBehavior()), previousGeographicMapCellPosition(SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->autoStepBlocks= autoStepBlocks;
    
this->offsetY= offsetY;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::gravity(VelocityProperties* velocityProperties, std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition) -> void{

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    this->geographicMapBehavior->getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, geographicMapCellPosition);
    

    bool hasSolidBlock = this->hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

                        if(!hasSolidBlock)
                        
                                    {
                                    this->gravityUtil->process(velocityProperties, this->gravityUtil->GAME_GRAVITY_VELOCITY);
    
velocityProperties->limitXYToForwardAndReverseMaxVelocity();
    
this->gravity();
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::getPositionTopLeft(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y) -> GeographicMapCellPosition*{

    int32_t xCellPosition = layer->getXP() + -x;;
    

    int32_t yCellPosition = layer->getYP() + -y;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapInterfaceArray[0]->getCellPositionAtXYNoThrow(xCellPosition, yCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::getPositionTopRight(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y) -> GeographicMapCellPosition*{

    int32_t xCellPosition = layer->getXP() + -x +layer->getWidth();;
    

    int32_t yCellPosition = layer->getYP() + -y;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapInterfaceArray[0]->getCellPositionAtXYNoThrow(xCellPosition, yCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::getPositionBottomLeft(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y) -> GeographicMapCellPosition*{

    int32_t xCellPosition = layer->getXP() + -x;;
    

    int32_t yCellPosition = layer->getYP() + -y +layer->getHeight();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapInterfaceArray[0]->getCellPositionAtXYNoThrow(xCellPosition, yCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::getPositionBottomRight(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer, int32_t x, int32_t y) -> GeographicMapCellPosition*{

    int32_t xCellPosition = layer->getXP() + -x +layer->getWidth();;
    

    int32_t yCellPosition = layer->getYP() + -y +layer->getHeight();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapInterfaceArray[0]->getCellPositionAtXYNoThrow(xCellPosition, yCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::getLeftPosition(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer) -> GeographicMapCellPosition*{

    int32_t xCellPosition = layer->getXP();;
    

    int32_t yCellPosition = layer->getYP() +layer->getHeight();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapInterfaceArray[0]->getCellPositionAtXYNoThrow(xCellPosition, yCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::getRightPosition(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, AllBinaryLayer* layer) -> GeographicMapCellPosition*{

    int32_t xCellPosition = layer->getXP() +layer->getWidth();;
    

    int32_t yCellPosition = layer->getYP() +layer->getHeight();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapInterfaceArray[0]->getCellPositionAtXYNoThrow(xCellPosition, yCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) -> GeographicMapCellPosition*{

    GeographicMapCellPosition* geographicMapCellPosition = SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;;
    

    GeographicMapCellPosition* topLeftGeographicMapCellPosition = this->getPositionTopLeft(geographicMapInterfaceArray, layer, x, y);;
    
geographicMapCellPosition= this->getGeographicMapCellPositionIfNotSolidBlockOrOffMap(geographicMapInterfaceArray, geographicMapCellTypeArray, topLeftGeographicMapCellPosition, velocityProperties, layer);
    

                        if(geographicMapCellPosition == SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                                    }
                                

    GeographicMapCellPosition* topRightGeographicMapCellPosition = this->getPositionTopRight(geographicMapInterfaceArray, layer, x, y);;
    
geographicMapCellPosition= this->getGeographicMapCellPositionIfNotSolidBlockOrOffMap(geographicMapInterfaceArray, geographicMapCellTypeArray, topRightGeographicMapCellPosition, velocityProperties, layer);
    

                        if(geographicMapCellPosition == SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                                    }
                                

    GeographicMapCellPosition* bottomLeftGeographicMapCellPosition = this->getPositionBottomLeft(geographicMapInterfaceArray, layer, x, y);;
    
geographicMapCellPosition= this->getGeographicMapCellPositionIfNotSolidBlockOrOffMap(geographicMapInterfaceArray, geographicMapCellTypeArray, bottomLeftGeographicMapCellPosition, velocityProperties, layer);
    

                        if(geographicMapCellPosition == SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                                    }
                                

    GeographicMapCellPosition* bottomRightGeographicMapCellPosition = this->getPositionBottomRight(geographicMapInterfaceArray, layer, x, y);;
    
geographicMapCellPosition= this->getGeographicMapCellPositionIfNotSolidBlockOrOffMap(geographicMapInterfaceArray, geographicMapCellTypeArray, bottomRightGeographicMapCellPosition, velocityProperties, layer);
    

                        if(geographicMapCellPosition == SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
                                    }
                                
                        else {
                            
                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapCellPosition;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::getGeographicMapCellPositionIfNotSolidBlockOrOffMap(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer) -> GeographicMapCellPosition*{

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
    GeographicMapCellPosition* possibleStepGeographicMapCellPosition = geographicMapCellPosition;;
    

    AllBinaryTiledLayer* tiledLayer = geographicMapInterfaceArray[0]->getAllBinaryTiledLayer();;
    

                        if(possibleStepGeographicMapCellPosition->getColumn() > 0 && possibleStepGeographicMapCellPosition->getRow() > 0 && possibleStepGeographicMapCellPosition->getColumn() < tiledLayer->getColumns() && possibleStepGeographicMapCellPosition->getRow() < tiledLayer->getRows())
                        
                                    {
                                    this->geographicMapBehavior->getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
    

    bool hasSolidBlock = this->hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

    bool hasOffMap = this->isOffMap(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

                        if(hasSolidBlock || hasOffMap)
                        
                                    {
                                    this->previousGeographicMapCellPosition= SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    

                                    }
                                
                        else {
                            this->previousGeographicMapCellPosition= possibleStepGeographicMapCellPosition;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return possibleStepGeographicMapCellPosition;
    

                        }
                            

                                    }
                                

                                    }
                                
                        else {
                            
                        }
                            
this->previousGeographicMapCellPosition= SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::moveAndLand(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, GeographicMapCellPosition* geographicMapCellPosition, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) -> void{

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
    TopViewCharacterInterface* topViewCharacterInterface = (dynamic_cast<TopViewCharacterInterface*>(layer));;
    
topViewCharacterInterface->terrainMove(geographicMapInterfaceArray, geographicMapCellTypeArray, x, y);
    

                                    }
                                
                        else {
                            
                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::move(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer, int32_t x, int32_t y) -> bool{

    GeographicMapCellPosition* geographicMapCellPosition = this->getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(geographicMapInterfaceArray, geographicMapCellTypeArray, velocityProperties, layer, x, y);;
    
this->moveAndLand(geographicMapInterfaceArray, geographicMapCellTypeArray, geographicMapCellPosition, velocityProperties, layer, x, y);
    

                        if(geographicMapCellPosition == SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::left(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer) -> void{

    GeographicMapCellPosition* geographicMapCellPosition = this->getLeftPosition(geographicMapInterfaceArray, layer);;
    

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
    GeographicMapCellPosition* possibleStepGeographicMapCellPosition = geographicMapInterfaceArray[0]->getGeographicMapCellPositionFactory()->getAt(geographicMapCellPosition->getColumn(), geographicMapCellPosition->getRow() -1);;
    
this->geographicMapBehavior->getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
    

    bool hasSolidBlock = this->hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

                        if(hasSolidBlock)
                        
                                    {
                                    
                        if(this->autoStepBlocks)
                        
                                    {
                                    
    TopViewCharacterInterface* topViewCharacterInterface = (dynamic_cast<TopViewCharacterInterface*>(layer));;
    
topViewCharacterInterface->leftp();
    

                                    }
                                
                        else {
                            velocityProperties->getVelocityXBasicDecimalP()->setint(0);
    

                        }
                            

                                    }
                                
                        else {
                            
    TopViewCharacterInterface* topViewCharacterInterface = (dynamic_cast<TopViewCharacterInterface*>(layer));;
    
topViewCharacterInterface->leftp();
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto GeographicMapTopViewGameLayerBehavior2::right(std::vector<BasicGeographicMap*> geographicMapInterfaceArray, std::vector<GeographicMapCellType*> geographicMapCellTypeArray, VelocityProperties* velocityProperties, AllBinaryLayer* layer) -> void{

    GeographicMapCellPosition* geographicMapCellPosition = this->getRightPosition(geographicMapInterfaceArray, layer);;
    

                        if(geographicMapCellPosition != SimpleGeographicMapCellPositionFactory::NULL_GEOGRAPHIC_MAP_CELL_POSITION)
                        
                                    {
                                    
    GeographicMapCellPosition* possibleStepGeographicMapCellPosition = geographicMapInterfaceArray[0]->getGeographicMapCellPositionFactory()->getAt(geographicMapCellPosition->getColumn(), geographicMapCellPosition->getRow() -1);;
    
this->geographicMapBehavior->getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
    

    bool hasSolidBlock = this->hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

                        if(hasSolidBlock)
                        
                                    {
                                    
                        if(this->autoStepBlocks)
                        
                                    {
                                    
    TopViewCharacterInterface* topViewCharacterInterface = (dynamic_cast<TopViewCharacterInterface*>(layer));;
    
topViewCharacterInterface->rightp();
    

                                    }
                                
                        else {
                            velocityProperties->getVelocityXBasicDecimalP()->setint(0);
    

                        }
                            

                                    }
                                
                        else {
                            
    TopViewCharacterInterface* topViewCharacterInterface = (dynamic_cast<TopViewCharacterInterface*>(layer));;
    
topViewCharacterInterface->rightp();
    

                        }
                            

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_GEOGRAPHICMAPTOPVIEWGAMELAYERBEHAVIOR2_CPP
