
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
        



            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Unit1DecalGameResources: public BasicGameResources {

    private: static Unit1DecalGameResources instance() { return Unit1DecalGameResources(); }

    public: static BasicGameResources getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Unit1DecalGameResources::instance();
    
}


private: Unit1DecalGameResources(){

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
    
super.init(ROOT, SIZE);
    
}


                //@Throws(Exception.constructor)
            
    protected: void append(std::string ROOT, std::string sizeString){
super.append(ROOT, sizeString);
    
}


                //@Throws(Exception.constructor)
            
    protected: std::string getString(){

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameGraphicsResourceUtil::getInstance().getStringForFeature(GraphicsFeatureFactory::getInstance().SPRITE_QUARTER_ROTATION_GRAPHICS);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getString();;
    

                        }
                            
}


};

            

