
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_MEDIA_UPLOADMEDIASINGLETON_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_MEDIA_UPLOADMEDIASINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/file/upload/media/UploadMediaSingleton.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/media/MediaData.h>

      
#include <org/allbinary/logic/visual/media/MediaIOUtil.h>

      
#include <org/allbinary/logic/visual/media/MediaTypeData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

UploadMediaSingleton::UploadMediaSingleton() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->readerFileTypesHashMap= StdUtil::getInstance()->createHashMap();
    
this->writerFileTypesHashMap= StdUtil::getInstance()->createHashMap();
    

    HashMap<Object*, Object*>* hashMap = MediaData::toHashMap();;
    

    Set* set = hashMap->keys();;
    

    std::vector<Object*> mediaDataNameArray = set->toArray();;
    

    int32_t size = mediaDataNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string mediaDataName = JavaBoxes::unbox<std::string>(mediaDataNameArray[index]);;
    

    MediaData* mediaData = dynamic_cast<MediaData*>(hashMap->get(mediaDataName));;
    
this->readerFileTypesHashMap->put(mediaData->getName(), mediaData->getType());
    
}


    MediaIOUtil* mediaIOUtil = MediaIOUtil::getInstance();;
    

    std::string RESIZABLE_MEDIA = MediaTypeData::getInstance()->RESIZABLE_MEDIA;;
    

    std::vector<std::string> readerFileTypes = mediaIOUtil->getReaderFormatNames();;
    




                        for (
    int32_t index = 0;index < readerFileTypes.size(); index++)
        {
this->readerFileTypesHashMap->put(readerFileTypes[index], RESIZABLE_MEDIA);
    
}


    std::vector<std::string> writerFileTypes = mediaIOUtil->getWriterFormatNames();;
    




                        for (
    int32_t index = 0;index < writerFileTypes.size(); index++)
        {
this->writerFileTypesHashMap->put(writerFileTypes[index], RESIZABLE_MEDIA);
    
}


                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->HTTPREQUEST))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Supported Media Readers: ");
    
stringBuffer->append(this->readerFileTypesHashMap->toString());
    
stringBuffer->append(" Writers: ");
    
stringBuffer->append(this->writerFileTypesHashMap->toString());
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UploadMediaSingleton::getInstance() -> UploadMediaSingleton*{

                        if(UploadMediaSingleton::uploadMedia == 
                                    nullptr
                                )
                        
                                    {
                                    UploadMediaSingleton::uploadMedia= new UploadMediaSingleton();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return UploadMediaSingleton::uploadMedia;
    
}


    auto UploadMediaSingleton::isReaderSupported(std::string mediaFileType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->readerFileTypesHashMap->containsKey(mediaFileType);;
    
}


    auto UploadMediaSingleton::isWriterSupported(std::string mediaFileType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->readerFileTypesHashMap->containsKey(mediaFileType);;
    
}


    auto UploadMediaSingleton::isSupported(std::string mediaFileType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isReaderSupported(mediaFileType) && this->isWriterSupported(mediaFileType);
    
}


    auto UploadMediaSingleton::isMedia(std::string mediaFileType, std::string aMediaType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isReaderMedia(mediaFileType, aMediaType) && this->isWriterMedia(mediaFileType, aMediaType);
    
}


    auto UploadMediaSingleton::isReaderMedia(std::string mediaFileType, std::string aMediaType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isMedia(mediaFileType, aMediaType, this->readerFileTypesHashMap);;
    
}


    auto UploadMediaSingleton::isWriterMedia(std::string mediaFileType, std::string aMediaType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isMedia(mediaFileType, aMediaType, this->writerFileTypesHashMap);;
    
}


    auto UploadMediaSingleton::isMedia(std::string mediaFileType, std::string aMediaType, HashMap<Object*, Object*>* hashMap) -> bool{

                        if(hashMap->containsKey(mediaFileType))
                        
                                    {
                                    
    std::string mediaType = JavaBoxes::unbox<std::string>(hashMap->get(mediaFileType));;
    

                        if(mediaType.compare(aMediaType) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_FILE_UPLOAD_MEDIA_UPLOADMEDIASINGLETON_CPP
