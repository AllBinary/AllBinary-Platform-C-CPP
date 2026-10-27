
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/input/media/image/InputImageType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h"

class SavedCaptureGenericProfileDataWorkerType: public GenericProfileDataWorkerType {

    public: static SavedCaptureGenericProfileDataWorkerType* SAVED_CAPTURE() { static std::unique_ptr<SavedCaptureGenericProfileDataWorkerType> value(new SavedCaptureGenericProfileDataWorkerType("Saved " +InputImageType::CAPTURE.getName(), "c:\\share\\captures\\2\\", 100)); return value.get(); }

    private: std::string path;

    private: int32_t lastFrame= 0;

public: SavedCaptureGenericProfileDataWorkerType(std::string name, std::string path, int32_t lastFrame) : GenericProfileDataWorkerType(name){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setPath(path);
    
this->setLastFrame(lastFrame);
    
}


    public: std::string getPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->path;
    
}


    public: void setPath(std::string path){
this->path= path;
    
}


    public: int32_t getLastFrame(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastFrame;
    
}


    public: void setLastFrame(int32_t lastFrame){
this->lastFrame= lastFrame;
    
}


};

            

