
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/resources/BasicGameResources.h>

      
#include <org/allbinary/game/layer/resources/GameGraphicsResourceUtil.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/game/configuration/feature/GraphicsFeatureFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Unit1DecalGameResources: public BasicGameResources {
        

    private: static const instance: Unit1DecalGameResources = new Unit1DecalGameResources();

    public static BasicGameResources getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Unit1DecalGameResources.instance;
    
}


private constructor (){

            super();
        
    ROOT: string = "/unit_decal";;
    

    SMALL: string = "_20_by_20.png";;
    

    MEDIUM: string = SMALL;;
    

    SIZE_FOUR: string = SMALL;;
    

    SIZE_FIVE: string = SMALL;;
    

    SIZE_SIX: string = SMALL;;
    

    SIZE: std::vector<string> = 
                                                        [
                                                            SMALL,MEDIUM,SIZE_FOUR,SIZE_FIVE,SIZE_SIX
                                                        ];;
    
super.init(ROOT, SIZE);
    
}


                //@Throws(Exception.constructor)
            
    append(string ROOT, string sizeString){
super.append(ROOT, sizeString);
    
}


                //@Throws(Exception.constructor)
            
    string getString(){

                        if(AndroidUtil.isAndroid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameGraphicsResourceUtil.getInstance()!.getStringForFeature(GraphicsFeatureFactory.getInstance()!.SPRITE_QUARTER_ROTATION_GRAPHICS);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.getString();;
    

                        }
                            
}


};

            

