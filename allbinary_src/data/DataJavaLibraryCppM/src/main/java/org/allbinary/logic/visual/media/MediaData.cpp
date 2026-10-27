
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

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/media/MediaTypeData.h"
#include "org/allbinary/logic/visual/media/MediaDataFactory.h"

class MediaData
            : public Object
         {

    private: static inline HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();

                //@Throws(Exception.constructor)
            
    public: static MediaData* get(std::string a_Name){

    MediaData* mediaData = dynamic_cast<MediaData*>(MediaData::hashMap->get(a_Name));;
    

                        if(mediaData != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return mediaData;
    

                                    }
                                
                        else {
                            


                            throw new Exception("No Such MediaData");
                    

                        }
                            
}


    public: static MediaData* getDefault(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaDataFactory::getInstance()->JPG;
    
}


    public: static HashMap<Object*, Object*>* toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaData::hashMap;
    
}


    private: std::string name;

    private: std::string type;

    private: std::string extension;

protected: MediaData(std::string a_Name){
this->name= a_Name;
    
this->extension= "." +this->name;
    
this->type= MediaTypeData::getInstance()->NOT_RESIZABLE_MEDIA;
    
MediaData::hashMap->put(a_Name, this);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->type;
    
}


    public: std::string getExtension(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->extension;
    
}


    public: bool isConvertableTo(MediaData* mediaData){

                        if(this == MediaDataFactory::getInstance()->GIF && mediaData == MediaDataFactory::getInstance()->JPG)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getName();;
    
}


};

            

