
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
        



            #include <vector>
        
            #include "../../../../../../../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/visual/media/MediaData.h>

      
#include <org/allbinary/logic/visual/media/MediaIOUtil.h>

      
#include <org/allbinary/logic/visual/media/MediaTypeData.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UploadMediaSingleton
            : public Object
         {

    private: static UploadMediaSingleton uploadMedia;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static UploadMediaSingleton getInstance(){

                        if(UploadMediaSingleton::uploadMedia == 
                                    nullptr
                                )
                        
                                    {
                                    UploadMediaSingleton::uploadMedia= UploadMediaSingleton();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UploadMediaSingleton::uploadMedia;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: HashMap<any, any> readerFileTypesHashMap;

    private: HashMap<any, any> writerFileTypesHashMap;

private: UploadMediaSingleton(){
this->readerFileTypesHashMap= HashMap<any, any>();
    
this->writerFileTypesHashMap= HashMap<any, any>();
    

    HashMap<any, any> hashMap = MediaData::toHashMap();;
    

    Set set = hashMap.keys();;
    

    std::vector<Object*> mediaDataNameArray = set.toArray();;
    

    int32_t size = mediaDataNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string mediaDataName = mediaDataNameArray[index]! as string;;
    

    MediaData mediaData = hashMap.get(mediaDataName) as MediaData;;
    
this->readerFileTypesHashMap.put(mediaData.getName(), mediaData.getType());
    
}


    MediaIOUtil mediaIOUtil = MediaIOUtil::getInstance();;
    

    std::string RESIZABLE_MEDIA = MediaTypeData::getInstance().RESIZABLE_MEDIA;;
    

    std::vector<std::string> readerFileTypes = mediaIOUtil.getReaderFormatNames();;
    




                        for (
    int32_t index = 0;index < readerFileTypes.size(); index++)
        {
this->readerFileTypesHashMap.put(readerFileTypes[index]!, RESIZABLE_MEDIA);
    
}


    std::vector<std::string> writerFileTypes = mediaIOUtil.getWriterFormatNames();;
    




                        for (
    int32_t index = 0;index < writerFileTypes.size(); index++)
        {
this->writerFileTypesHashMap.put(writerFileTypes[index]!, RESIZABLE_MEDIA);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().HTTPREQUEST))
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append("Supported Media Readers: ");
    
stringBuffer.append(this->readerFileTypesHashMap.toString());
    
stringBuffer.append(" Writers: ");
    
stringBuffer.append(this->writerFileTypesHashMap.toString());
    
this->logUtil.putF(stringBuffer.toString(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


    public: bool isReaderSupported(std::string mediaFileType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->readerFileTypesHashMap.containsKey(mediaFileType);;
    
}


    public: bool isWriterSupported(std::string mediaFileType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->readerFileTypesHashMap.containsKey(mediaFileType);;
    
}


    public: bool isSupported(std::string mediaFileType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isReaderSupported(mediaFileType) && this->isWriterSupported(mediaFileType);
    
}


    public: bool isMedia(std::string mediaFileType, std::string aMediaType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isReaderMedia(mediaFileType, aMediaType) && this->isWriterMedia(mediaFileType, aMediaType);
    
}


    public: bool isReaderMedia(std::string mediaFileType, std::string aMediaType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isMedia(mediaFileType, aMediaType, this->readerFileTypesHashMap);;
    
}


    public: bool isWriterMedia(std::string mediaFileType, std::string aMediaType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isMedia(mediaFileType, aMediaType, this->writerFileTypesHashMap);;
    
}


    private: bool isMedia(std::string mediaFileType, std::string aMediaType, HashMap<any, any> hashMap){

                        if(hashMap.containsKey(mediaFileType))
                        
                                    {
                                    
    std::string mediaType = hashMap.get(mediaFileType) as string;;
    

                        if(mediaType.compareTo(aMediaType) == 0)
                        
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


};

            

