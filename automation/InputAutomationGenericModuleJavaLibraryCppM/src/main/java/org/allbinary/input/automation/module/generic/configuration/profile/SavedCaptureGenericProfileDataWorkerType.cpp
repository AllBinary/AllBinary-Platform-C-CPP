
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
        



#include <org/allbinary/input/media/image/InputImageType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GenericProfileDataWorkerType.h"

class SavedCaptureGenericProfileDataWorkerType: public GenericProfileDataWorkerType {
        

    public static SAVED_CAPTURE: SavedCaptureGenericProfileDataWorkerType = new SavedCaptureGenericProfileDataWorkerType("Saved " +InputImageType.CAPTURE.getName(), "c:\\share\\captures\\2\\", 100);

    private: path: string;

    private: lastFrame: int32_t= 0;

public constructor (string name, string path, int32_t lastFrame){
            super(name);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setPath(path);
    
this.setLastFrame(lastFrame);
    
}


    public string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.path;
    
}


    public setPath(string path){
this.path= path;
    
}


    public int32_t getLastFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.lastFrame;
    
}


    public setLastFrame(int32_t lastFrame){
this.lastFrame= lastFrame;
    
}


};

            

