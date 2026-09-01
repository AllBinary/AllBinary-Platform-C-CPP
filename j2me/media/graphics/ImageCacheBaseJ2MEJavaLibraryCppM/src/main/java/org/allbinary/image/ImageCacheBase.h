
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H
        #define ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageFactory.h"

class ImageCacheBase
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const ImageFactory imageFactory = ImageFactory::getInstance();

    protected: const Hashtable<any, any> hashtable = Hashtable<any, any>();

    protected: const int32_t SIZE = 128;

    protected: const std::vector<int32_t> widths = new Array(this->SIZE);

    protected: const std::vector<int32_t> heights = new Array(this->SIZE);

    protected: const std::vector<BasicArrayList> listOfList = new Array(this->SIZE);

    protected: const std::vector<BasicArrayList> availableListOfList = new Array(this->SIZE);

    protected: int32_t volume = 0;

    protected: int32_t nextIndex = 0;

public: ImageCacheBase();

    protected: Image getImage(Object* resourceId);

    public: void releaseAll();

    protected: int32_t getIndexWH(int32_t width, int32_t height);

    protected: Image getFromAvailable(int32_t foundIndex, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image get(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image getWithKey(Object* key);

                //@Throws(Exception.constructor)
            
    protected: Image createImage(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    protected: Image createImageFromInputStream(Object* key, InputStream inputStream);

    public: std::string toString();

    public: Hashtable<any, any> getHashtableP();

    public: void init(Image image);

    public: void initProgress();

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H
