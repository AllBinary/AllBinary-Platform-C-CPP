
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/RotationAnimation.h>

      
#include <org/allbinary/game/identification/Group.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h>

      
#include <org/allbinary/media/graphics/geography/map/GeographicMapCellPositionTracking.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "VehicleLayerInterface.h"
#include "VehicleProperties.h"

class NullVehicleLayer
            : public Object
        : public VehicleLayerInterface {
        

    public static const NULL_VEHICLE_LAYER: NullVehicleLayer = new NullVehicleLayer();

    public string getName(){



                            throw new RuntimeException();
                    
}


    public std::vector<Group> getGroupInterface(){



                            throw new RuntimeException();
                    
}


    public setPosition(int32_t x, int32_t y, int32_t z){



                            throw new RuntimeException();
                    
}


    public int32_t getHeight(){



                            throw new RuntimeException();
                    
}


    public int32_t getWidth(){



                            throw new RuntimeException();
                    
}


    public int32_t getHalfHeight(){



                            throw new RuntimeException();
                    
}


    public int32_t getHalfWidth(){



                            throw new RuntimeException();
                    
}


    public int32_t getXP(){



                            throw new RuntimeException();
                    
}


    public int32_t getYP(){



                            throw new RuntimeException();
                    
}


    public int32_t getZP(){



                            throw new RuntimeException();
                    
}


    public int32_t getX2(){



                            throw new RuntimeException();
                    
}


    public int32_t getY2(){



                            throw new RuntimeException();
                    
}


    public int32_t getZ2(){



                            throw new RuntimeException();
                    
}


    public bool isVisible(){



                            throw new RuntimeException();
                    
}


    public moveDXYZ(int32_t dx, int32_t dy, int32_t dz){



                            throw new RuntimeException();
                    
}


    public setVisible(bool visible){



                            throw new RuntimeException();
                    
}


    public bool implmentsTickableInterface(){



                            throw new RuntimeException();
                    
}


    public bool implmentsCollidableInterface(){



                            throw new RuntimeException();
                    
}


    public bool implmentsGameInputInterface(){



                            throw new RuntimeException();
                    
}


    public bool implmentsArtificialIntelligenceCompositeInterface(){



                            throw new RuntimeException();
                    
}


    public int32_t getType(){



                            throw new RuntimeException();
                    
}


    public VehicleProperties getVehicleProperties(){



                            throw new RuntimeException();
                    
}


    public BasicArrayList getGameKeyEventList(){



                            throw new RuntimeException();
                    
}


    public BasicDecimal getSpeedBasicDecimal(){



                            throw new RuntimeException();
                    
}


    public bool isReadyForExplosion(){



                            throw new RuntimeException();
                    
}


    public RotationAnimation getRotationAnimationInterface(){



                            throw new RuntimeException();
                    
}


    public setRotationAnimationInterface(RotationAnimation animationInterface){



                            throw new RuntimeException();
                    
}


    public bool isDestroyed(){



                            throw new RuntimeException();
                    
}


    public bool isFinish(){



                            throw new RuntimeException();
                    
}


    public int32_t getFinalPosition(){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public handleFinish(){



                            throw new RuntimeException();
                    
}


    public GeographicMapCellPositionTracking getGeographicMapCellPositionTracking(){



                            throw new RuntimeException();
                    
}


    public std::vector<GeographicMapCellHistory> getGeographicMapCellHistoryArray(){



                            throw new RuntimeException();
                    
}


    public setGeographicMapCellHistoryArray(std::vector<GeographicMapCellHistory> geographicMapCellHistory){



                            throw new RuntimeException();
                    
}


    public paint(Graphics graphics){
}


    public paintThreed(Graphics graphics){
}


};

            

