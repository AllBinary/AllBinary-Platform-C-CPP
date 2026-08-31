
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H
        #define ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RendererStateFactory
            : public Object
         {
        

    private: static const instance: RendererStateFactory = new RendererStateFactory();

    public static RendererStateFactory getInstance();

    private: loaded: bool = false;

    private: surfaceChanged: bool = false;

    public setLoaded(bool loaded);

    public bool isLoaded();

    public setSurfaceChanged(bool initialized);

    public bool isSurfaceChanged();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_RENDERERSTATEFACTORY_H
