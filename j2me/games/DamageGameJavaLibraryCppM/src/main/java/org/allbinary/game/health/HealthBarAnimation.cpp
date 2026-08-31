
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HealthBarAnimation: public Animation {
        

    private: const basicColorFactory: BasicColorFactory = BasicColorFactory.getInstance()!;

    x2: int32_t= 0;

    thickness: int32_t= 0;

    private: location: int32_t;

    allbinaryLayer: AllBinaryLayer;

public constructor (AllBinaryLayer layerInterface, int32_t location){

            super();
        this.allbinaryLayer= layerInterface;
    
this.location= location;
    

    basicHudFactory: BasicHudFactory = BasicHudFactory.getInstance()!;;
    

                        if(this.location != basicHudFactory!.TOPLEFT && this.location != basicHudFactory!.BOTTOMLEFT)
                        
                                    {
                                    


                            throw new Exception("Location Not Valid");
                    

                                    }
                                

                        if(layerInterface!.getWidth() > 40)
                        
                                    {
                                    this.thickness= 3;
    

                                    }
                                
                             else 
                        if(layerInterface!.getWidth() > 20)
                        
                                    {
                                    this.thickness= 2;
    

                                    }
                                
                        else {
                            this.thickness= 1;
    

                        }
                            
}


    public onHealthChange(int32_t newX2){
this.x2= newX2;
    

    quarter: int32_t = (this.allbinaryLayer!.getWidth()>>2);;
    

                        if(this.x2 > quarter *3)
                        
                                    {
                                    this.basicColor= this.basicColorFactory!.GREEN;
    
this.colorP= this.basicColor!.intValue();
    

                                    }
                                
                             else 
                        if(this.x2 > quarter *2)
                        
                                    {
                                    this.basicColor= this.basicColorFactory!.YELLOW;
    
this.colorP= this.basicColor!.intValue();
    

                                    }
                                
                             else 
                        if(this.x2 > quarter)
                        
                                    {
                                    this.basicColor= this.basicColorFactory!.ORANGE;
    
this.colorP= this.basicColor!.intValue();
    

                                    }
                                
                        else {
                            this.basicColor= this.basicColorFactory!.RED;
    
this.colorP= this.basicColor!.intValue();
    

                        }
                            
}


    int32_t getY(){

    basicHudFactory: BasicHudFactory = BasicHudFactory.getInstance()!;;
    

                        if(this.location == basicHudFactory!.TOPLEFT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.allbinaryLayer!.getViewPosition()!.getY() -4;
    

                                    }
                                
                             else 
                        if(this.location == basicHudFactory!.BOTTOMLEFT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.allbinaryLayer!.getViewPosition()!.getY2() +4;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


};

            

