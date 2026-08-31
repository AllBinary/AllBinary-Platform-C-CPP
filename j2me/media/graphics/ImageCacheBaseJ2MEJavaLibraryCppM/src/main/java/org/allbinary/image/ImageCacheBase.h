
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const imageFactory: ImageFactory = ImageFactory.getInstance()!;

    const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    const SIZE: int32_t = 128;

    const widths: std::vector<int32_t> = new Array(this.SIZE);

    const heights: std::vector<int32_t> = new Array(this.SIZE);

    const listOfList: std::vector<BasicArrayList> = new Array(this.SIZE);

    const availableListOfList: std::vector<BasicArrayList> = new Array(this.SIZE);

    volume: int32_t = 0;

    nextIndex: int32_t = 0;

public constructor ();

    Image getImage(any = {} resourceId);

    public releaseAll();

    int32_t getIndexWH(int32_t width, int32_t height);

    Image getFromAvailable(int32_t foundIndex, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public Image get(string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public Image getWithKey(any = {} key);

                //@Throws(Exception.constructor)
            
    Image createImage(string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    Image createImageFromInputStream(any = {} key, InputStream inputStream);

    public string toString();

    public Hashtable<any, any> getHashtableP();

    public init(Image image);

    public initProgress();

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHEBASE_H
