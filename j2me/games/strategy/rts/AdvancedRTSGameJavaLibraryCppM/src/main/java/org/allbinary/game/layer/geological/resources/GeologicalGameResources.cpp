
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2002 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGAMERESOURCES_CPP
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGAMERESOURCES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/geological/resources/GeologicalGameResources.h"
        

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
        
Object* GeologicalGameResources::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto GeologicalGameResources::getInstance() -> BasicGameResources*{

                        if(GeologicalGameResources::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GeologicalGameResources::instance= new GeologicalGameResources();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GeologicalGameResources*>(GeologicalGameResources::instance);
    
}


GeologicalGameResources::GeologicalGameResources(){

    std::string ROOT = "/resource";;
    

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
            
    auto GeologicalGameResources::append(std::string ROOT, std::string sizeString) -> void{
BasicGameResources::append(ROOT, sizeString);
    
}


                //@Throws(Exception.constructor)
            
    auto GeologicalGameResources::getString() -> std::string{

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




        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALGAMERESOURCES_CPP
