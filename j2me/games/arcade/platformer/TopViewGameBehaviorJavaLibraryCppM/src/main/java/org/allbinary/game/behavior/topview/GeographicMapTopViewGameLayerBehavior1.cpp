
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/media/graphics/geography/map/MultiGeographicMapBehavior.h>

      
#include <org/allbinary/game/layer/AllBinaryTiledLayer.h>

      
#include <org/allbinary/game/physics/acceleration/GravityUtil.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/media/graphics/geography/map/BasicGeographicMap.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeographicMapTopViewLayerBehavior.h"
#include "TopViewCharacterInterface.h"

class GeographicMapTopViewGameLayerBehavior1: public GeographicMapTopViewLayerBehavior {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GravityUtil gravityUtil = GravityUtil::getInstance();

    private: const MultiGeographicMapBehavior geographicMapBehavior = MultiGeographicMapBehavior();

    private: bool autoStepBlocks;

    private: int32_t offsetY;

    private: GeographicMapCellPosition previousGeographicMapCellPosition;

public: GeographicMapTopViewGameLayerBehavior1(int32_t maxGravityActionIndex, bool autoStepBlocks, int32_t offsetY){
            super(maxGravityActionIndex);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->autoStepBlocks= autoStepBlocks;
    
this->offsetY= offsetY;
    
}


                //@Throws(Exception.constructor)
            
    public: void gravity(VelocityProperties velocityProperties, std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, GeographicMapCellPosition geographicMapCellPosition){

                        if(geographicMapCellPosition != 
                                    nullptr
                                )
                        
                                    {
                                    this->geographicMapBehavior.getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, geographicMapCellPosition);
    

    bool hasSolidBlock = this->hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

                        if(!hasSolidBlock)
                        
                                    {
                                    this->gravityUtil.process(velocityProperties, this->gravityUtil.GAME_GRAVITY_VELOCITY);
    
velocityProperties.limitXYToForwardAndReverseMaxVelocity();
    
this->gravity();
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getPosition(std::vector<BasicGeographicMap> geographicMapInterfaceArray, AllBinaryLayer layer, int32_t x, int32_t y){

    int32_t xCellPosition = layer.getXP() + -x +layer.getWidth();;
    

    int32_t yCellPosition = layer.getYP() + -y +layer.getHeight();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapInterfaceArray[0]!.getCellPositionAtXYNoThrow(xCellPosition, yCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition getLeftPosition(std::vector<BasicGeographicMap> geographicMapInterfaceArray, AllBinaryLayer layer){

    int32_t xCellPosition = layer.getXP();;
    

    int32_t yCellPosition = layer.getYP() +layer.getHeight();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapInterfaceArray[0]!.getCellPositionAtXYNoThrow(xCellPosition, yCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    private: GeographicMapCellPosition getRightPosition(std::vector<BasicGeographicMap> geographicMapInterfaceArray, AllBinaryLayer layer){

    int32_t xCellPosition = layer.getXP() +layer.getWidth();;
    

    int32_t yCellPosition = layer.getYP() +layer.getHeight();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return geographicMapInterfaceArray[0]!.getCellPositionAtXYNoThrow(xCellPosition, yCellPosition);;
    
}


                //@Throws(Exception.constructor)
            
    public: GeographicMapCellPosition getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, VelocityProperties velocityProperties, AllBinaryLayer layer, int32_t x, int32_t y){

    GeographicMapCellPosition geographicMapCellPosition = this->getPosition(geographicMapInterfaceArray, layer, x, y);;
    

                        if(this->previousGeographicMapCellPosition != geographicMapCellPosition && geographicMapCellPosition != 
                                    nullptr
                                )
                        
                                    {
                                    
    GeographicMapCellPosition possibleStepGeographicMapCellPosition = geographicMapCellPosition;;
    

    AllBinaryTiledLayer tiledLayer = geographicMapInterfaceArray[0]!.getAllBinaryTiledLayer();;
    

                        if(possibleStepGeographicMapCellPosition.getColumn() > 0 && possibleStepGeographicMapCellPosition.getRow() > 0 && possibleStepGeographicMapCellPosition.getColumn() < tiledLayer.getColumns() && possibleStepGeographicMapCellPosition.getRow() < tiledLayer.getRows())
                        
                                    {
                                    this->geographicMapBehavior.getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
    

    bool hasSolidBlock = this->hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

                        if(hasSolidBlock)
                        
                                    {
                                    velocityProperties.getVelocityXBasicDecimalP().setint(0);
    
this->previousGeographicMapCellPosition= 
                                        nullptr
                                    ;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    

                                    }
                                
                        else {
                            this->previousGeographicMapCellPosition= possibleStepGeographicMapCellPosition;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return possibleStepGeographicMapCellPosition;
    

                        }
                            

                                    }
                                

                                    }
                                
this->previousGeographicMapCellPosition= 
                                        nullptr
                                    ;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    public: void moveAndLand(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, GeographicMapCellPosition geographicMapCellPosition, VelocityProperties velocityProperties, AllBinaryLayer layer, int32_t x, int32_t y){

                        if(geographicMapCellPosition != 
                                    nullptr
                                )
                        
                                    {
                                    layer = layerlayer as TopViewCharacterInterface
layer.
                    terrainMove(geographicMapInterfaceArray, geographicMapCellTypeArray, x, y);
    

                                    }
                                
                        else {
                            
                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: bool move(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, VelocityProperties velocityProperties, AllBinaryLayer layer, int32_t x, int32_t y){

    GeographicMapCellPosition geographicMapCellPosition = this->getGeographicMapCellPositionIfNotSolidBlockOrOffMapLocation(geographicMapInterfaceArray, geographicMapCellTypeArray, velocityProperties, layer, x, y);;
    
this->moveAndLand(geographicMapInterfaceArray, geographicMapCellTypeArray, geographicMapCellPosition, velocityProperties, layer, x, y);
    

                        if(geographicMapCellPosition == 
                                    nullptr
                                )
                        
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
            
    public: void left(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, VelocityProperties velocityProperties, AllBinaryLayer layer){

    GeographicMapCellPosition geographicMapCellPosition = this->getLeftPosition(geographicMapInterfaceArray, layer);;
    

                        if(geographicMapCellPosition != 
                                    nullptr
                                )
                        
                                    {
                                    
    GeographicMapCellPosition possibleStepGeographicMapCellPosition = geographicMapInterfaceArray[0]!.getGeographicMapCellPositionFactory().getAt(geographicMapCellPosition.getColumn(), geographicMapCellPosition.getRow() -1);;
    
this->geographicMapBehavior.getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
    

    bool hasSolidBlock = this->hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

                        if(hasSolidBlock)
                        
                                    {
                                    
                        if(this->autoStepBlocks)
                        
                                    {
                                    layer = layerlayer as TopViewCharacterInterface
layer.
                    leftp();
    

                                    }
                                
                        else {
                            velocityProperties.getVelocityXBasicDecimalP().setint(0);
    

                        }
                            

                                    }
                                
                        else {
                            layer = layerlayer as TopViewCharacterInterface
layer.
                    leftp();
    

                        }
                            

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: void right(std::vector<BasicGeographicMap> geographicMapInterfaceArray, std::vector<GeographicMapCellType> geographicMapCellTypeArray, VelocityProperties velocityProperties, AllBinaryLayer layer){

    GeographicMapCellPosition geographicMapCellPosition = this->getRightPosition(geographicMapInterfaceArray, layer);;
    

                        if(geographicMapCellPosition != 
                                    nullptr
                                )
                        
                                    {
                                    
    GeographicMapCellPosition possibleStepGeographicMapCellPosition = geographicMapInterfaceArray[0]!.getGeographicMapCellPositionFactory().getAt(geographicMapCellPosition.getColumn(), geographicMapCellPosition.getRow() -1);;
    
this->geographicMapBehavior.getCellTypeAt(geographicMapInterfaceArray, geographicMapCellTypeArray, possibleStepGeographicMapCellPosition);
    

    bool hasSolidBlock = this->hasSolidBlock(geographicMapInterfaceArray, geographicMapCellTypeArray);;
    

                        if(hasSolidBlock)
                        
                                    {
                                    
                        if(this->autoStepBlocks)
                        
                                    {
                                    layer = layerlayer as TopViewCharacterInterface
layer.
                    rightp();
    

                                    }
                                
                        else {
                            velocityProperties.getVelocityXBasicDecimalP().setint(0);
    

                        }
                            

                                    }
                                
                        else {
                            layer = layerlayer as TopViewCharacterInterface
layer.
                    rightp();
    

                        }
                            

                                    }
                                
}


};

            

