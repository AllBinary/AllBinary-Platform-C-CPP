
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_UNIT_UNIT1DECALGAMERESOURCES_CPP
        #define ORG_ALLBINARY_GAME_LAYER_UNIT_UNIT1DECALGAMERESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/unit/Unit1DecalGameResources.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* Unit1DecalGameResources::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto Unit1DecalGameResources::getInstance() -> BasicGameResources*{

                        if(Unit1DecalGameResources::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    Unit1DecalGameResources::instance= new Unit1DecalGameResources();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<Unit1DecalGameResources*>(Unit1DecalGameResources::instance);
    
}


Unit1DecalGameResources::Unit1DecalGameResources(){

    std::string ROOT = "/unit_decal";;
    

    std::string SMALL = "_20_by_20.png";;
    

    std::string MEDIUM = SMALL;;
    

    std::string SIZE_FOUR = SMALL;;
    

    std::string SIZE_FIVE = SMALL;;
    

    std::string SIZE_SIX = SMALL;;
    

    std::vector<std::string> SIZE = 
                                                        {
                                                            SMALL,MEDIUM,SIZE_FOUR,SIZE_FIVE,SIZE_SIX
                                                        };;
    
BasicGameResources::init(ROOT, SIZE);
    
}


                //@Throws(Exception.constructor)
            
    auto Unit1DecalGameResources::append(std::string ROOT, std::string sizeString) -> void{
BasicGameResources::append(ROOT, sizeString);
    
}


                //@Throws(Exception.constructor)
            
    auto Unit1DecalGameResources::getString() -> std::string{

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameGraphicsResourceUtil::getInstance()->getStringForFeature(GraphicsFeatureFactory::getInstance()->SPRITE_QUARTER_ROTATION_GRAPHICS);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicGameResources::getString();;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_GAME_LAYER_UNIT_UNIT1DECALGAMERESOURCES_CPP
