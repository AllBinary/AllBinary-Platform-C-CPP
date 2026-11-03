
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/media/MediaData.h"
        

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

HashMap<Object*, Object*>* MediaData::hashMap = StdUtil::getInstance()->createHashMap();

MediaData::MediaData(std::string a_Name){
this->name= a_Name;
    
this->extension= JavaString::valueOf(".") +JavaString::valueOf(this->name);
    
this->type= MediaTypeData::getInstance()->NOT_RESIZABLE_MEDIA;
    
MediaData::hashMap->put(a_Name, this);
    
}


    auto MediaData::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto MediaData::getType() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->type;
    
}


    auto MediaData::getExtension() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->extension;
    
}


    auto MediaData::isConvertableTo(MediaData* mediaData) -> bool{

                        if(this == MediaDataFactory::getInstance()->GIF && mediaData == MediaDataFactory::getInstance()->JPG)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto MediaData::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getName();;
    
}


                //@Throws(Exception.constructor)
            
    auto MediaData::get(std::string a_Name) -> MediaData*{

    MediaData* mediaData = dynamic_cast<MediaData*>(MediaData::hashMap->get(a_Name));;
    

                        if(mediaData != 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return mediaData;
    

                                    }
                                
                        else {
                            


                            throw Exception("No Such MediaData");
                    

                        }
                            
}


    auto MediaData::getDefault() -> MediaData*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return MediaDataFactory::getInstance()->JPG;
    
}


    auto MediaData::toHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return MediaData::hashMap;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIADATA_CPP
