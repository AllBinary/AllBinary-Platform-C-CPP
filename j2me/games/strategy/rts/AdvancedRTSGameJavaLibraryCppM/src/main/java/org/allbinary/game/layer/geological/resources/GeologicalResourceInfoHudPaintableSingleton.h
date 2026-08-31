
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLESINGLETON_H
        #define ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLESINGLETON_H

            #include "../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GeologicalResourceInfoHudPaintable.h"

class GeologicalResourceInfoHudPaintableSingleton
            : public Object
         {
        

    private: static const instance: GeologicalResourceInfoHudPaintable = new GeologicalResourceInfoHudPaintable();

    public static GeologicalResourceInfoHudPaintable getInstance();

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_GEOLOGICAL_RESOURCES_GEOLOGICALRESOURCEINFOHUDPAINTABLESINGLETON_H
