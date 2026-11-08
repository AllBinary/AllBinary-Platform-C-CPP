
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_CPP
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/health/HealthBarAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HealthBarAnimation::HealthBarAnimation(AllBinaryLayer* layerInterface, int32_t location) : basicColorFactory(BasicColorFactory::getInstance()){
this->allbinaryLayer= layerInterface;
    
this->location= location;
    

    BasicHudFactory* basicHudFactory = BasicHudFactory::getInstance();;
    

                        if(this->location != basicHudFactory->TOPLEFT && this->location != basicHudFactory->BOTTOMLEFT)
                        
                                    {
                                    


                            throw Exception("Location Not Valid");
                    

                                    }
                                

                        if(layerInterface->getWidth() > 40)
                        
                                    {
                                    this->thickness= 3;
    

                                    }
                                
                             else 
                        if(layerInterface->getWidth() > 20)
                        
                                    {
                                    this->thickness= 2;
    

                                    }
                                
                        else {
                            this->thickness= 1;
    

                        }
                            
}


    auto HealthBarAnimation::onHealthChange(int32_t newX2) -> void{
this->x2= newX2;
    

    int32_t quarter = (this->allbinaryLayer->getWidth()>>2);;
    

                        if(this->x2 > quarter *3)
                        
                                    {
                                    this->basicColor= this->basicColorFactory->GREEN;
    
this->colorP= JavaBoxes::value<int32_t>(this->basicColor);
    

                                    }
                                
                             else 
                        if(this->x2 > quarter *2)
                        
                                    {
                                    this->basicColor= this->basicColorFactory->YELLOW;
    
this->colorP= JavaBoxes::value<int32_t>(this->basicColor);
    

                                    }
                                
                             else 
                        if(this->x2 > quarter)
                        
                                    {
                                    this->basicColor= this->basicColorFactory->ORANGE;
    
this->colorP= JavaBoxes::value<int32_t>(this->basicColor);
    

                                    }
                                
                        else {
                            this->basicColor= this->basicColorFactory->RED;
    
this->colorP= JavaBoxes::value<int32_t>(this->basicColor);
    

                        }
                            
}


    auto HealthBarAnimation::getY() -> int32_t{

    BasicHudFactory* basicHudFactory = BasicHudFactory::getInstance();;
    

                        if(this->location == basicHudFactory->TOPLEFT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->allbinaryLayer->getViewPosition()->getY() -4;
    

                                    }
                                
                             else 
                        if(this->location == basicHudFactory->BOTTOMLEFT)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->allbinaryLayer->getViewPosition()->getY2() +4;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}




        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARANIMATION_CPP
