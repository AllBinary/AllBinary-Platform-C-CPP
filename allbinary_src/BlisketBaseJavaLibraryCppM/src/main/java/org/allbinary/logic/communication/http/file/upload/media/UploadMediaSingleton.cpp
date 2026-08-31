
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
        

    private: static uploadMedia: UploadMediaSingleton;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static UploadMediaSingleton getInstance(){

                        if(UploadMediaSingleton.uploadMedia == 
                                    null
                                )
                        
                                    {
                                    UploadMediaSingleton.uploadMedia= new UploadMediaSingleton();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UploadMediaSingleton.uploadMedia;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: readerFileTypesHashMap: HashMap<any, any>;

    private: writerFileTypesHashMap: HashMap<any, any>;

private constructor (){

            super();
        this.readerFileTypesHashMap= new HashMap<any, any>();
    
this.writerFileTypesHashMap= new HashMap<any, any>();
    

    hashMap: HashMap<any, any> = MediaData.toHashMap()!;;
    

    set: Set = hashMap!.keys()!;;
    

    mediaDataNameArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = mediaDataNameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    mediaDataName: string = mediaDataNameArray[index]! as string;;
    

    mediaData: MediaData = hashMap!.get(mediaDataName) as MediaData;;
    
this.readerFileTypesHashMap!.put(mediaData!.getName(), mediaData!.getType());
    
}


    mediaIOUtil: MediaIOUtil = MediaIOUtil.getInstance()!;;
    

    RESIZABLE_MEDIA: string = MediaTypeData.getInstance()!.RESIZABLE_MEDIA;;
    

    readerFileTypes: std::vector<string> = mediaIOUtil!.getReaderFormatNames()!;;
    




                        for (
    index: int32_t = 0;index < readerFileTypes!.length; index++)
        {
this.readerFileTypesHashMap!.put(readerFileTypes[index]!, RESIZABLE_MEDIA);
    
}


    writerFileTypes: std::vector<string> = mediaIOUtil!.getWriterFormatNames()!;;
    




                        for (
    index: int32_t = 0;index < writerFileTypes!.length; index++)
        {
this.writerFileTypesHashMap!.put(writerFileTypes[index]!, RESIZABLE_MEDIA);
    
}


                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.HTTPREQUEST))
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Supported Media Readers: ");
    
stringBuffer!.append(this.readerFileTypesHashMap!.toString());
    
stringBuffer!.append(" Writers: ");
    
stringBuffer!.append(this.writerFileTypesHashMap!.toString());
    
this.logUtil!.putF(stringBuffer!.toString(), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


    public bool isReaderSupported(string mediaFileType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.readerFileTypesHashMap!.containsKey(mediaFileType);;
    
}


    public bool isWriterSupported(string mediaFileType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.readerFileTypesHashMap!.containsKey(mediaFileType);;
    
}


    public bool isSupported(string mediaFileType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isReaderSupported(mediaFileType) && this.isWriterSupported(mediaFileType);
    
}


    public bool isMedia(string mediaFileType, string aMediaType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isReaderMedia(mediaFileType, aMediaType) && this.isWriterMedia(mediaFileType, aMediaType);
    
}


    public bool isReaderMedia(string mediaFileType, string aMediaType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isMedia(mediaFileType, aMediaType, this.readerFileTypesHashMap);;
    
}


    public bool isWriterMedia(string mediaFileType, string aMediaType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isMedia(mediaFileType, aMediaType, this.writerFileTypesHashMap);;
    
}


    bool isMedia(string mediaFileType, string aMediaType, HashMap<any, any> hashMap){

                        if(hashMap!.containsKey(mediaFileType))
                        
                                    {
                                    
    mediaType: string = hashMap!.get(mediaFileType) as string;;
    

                        if(mediaType!.compareTo(aMediaType) == 0)
                        
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

            

