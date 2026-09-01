
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MediaTypeData.h"
#include "MediaDataFactory.h"

class MediaData
            : public Object
         {

    private: static HashMap<any, any> hashMap = HashMap<any, any>();

                //@Throws(Exception.constructor)
            
    public: static MediaData get(std::string a_Name){

    MediaData mediaData = MediaData::hashMap.get(a_Name) as MediaData;;
    

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


    public: static MediaData getDefault(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaDataFactory::getInstance().JPG;
    
}


    public: static HashMap<any, any> toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaData::hashMap;
    
}


    private: std::string name;

    private: std::string type;

    private: std::string extension;

protected: MediaData(std::string a_Name){
this->name= a_Name;
    
this->extension= "." +this->name;
    
this->type= MediaTypeData::getInstance().NOT_RESIZABLE_MEDIA;
    
MediaData::hashMap.put(a_Name, this);
    
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


    public: bool isConvertableTo(MediaData mediaData){

                        if(this == MediaDataFactory::getInstance().GIF && mediaData == MediaDataFactory::getInstance().JPG)
                        
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

            

