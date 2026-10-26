
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicArrayListD.h"

class ImageTypeUtil
            : public Object
         {

    private: static ImageTypeUtil SINGLETON = ImageTypeUtil();

    public: static ImageTypeUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageTypeUtil::SINGLETON;
    
}


    public: const std::string PNG = "png";

    public: const std::string JPG = "jpg";

    public: const std::string GIF = "gif";

    private: const BasicArrayList list = BasicArrayListD();

private: ImageTypeUtil(){
this->list.add(JPG);
    
this->list.add(GIF);
    
this->list.add(PNG);
    
}


    public: bool isSupported(std::string mediaFileType){
mediaFileType= mediaFileType.toLowerCase();
    




                        for (
    int32_t index = this->list.size() -1;index >= 0; index--)
        {

    std::string name = this->list.objectArray[index];;
    

                        if(mediaFileType.compare(name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

