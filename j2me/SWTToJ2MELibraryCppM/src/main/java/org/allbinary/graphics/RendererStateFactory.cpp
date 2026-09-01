
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
        



            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RendererStateFactory
            : public Object
         {

    private: static RendererStateFactory instance() { return RendererStateFactory(); }

    public: static RendererStateFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RendererStateFactory::instance();
    
}


    private: bool loaded = false;

    private: bool surfaceChanged = false;

    public: void setLoaded(bool loaded){
this->loaded= loaded;
    
}


    public: bool isLoaded(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->loaded;
    
}


    public: void setSurfaceChanged(bool initialized){
this->surfaceChanged= initialized;
    
}


    public: bool isSurfaceChanged(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->surfaceChanged;
    
}


};

            

