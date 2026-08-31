
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <java/io/InputStream.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
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

public constructor (){

            super();
        



                        for (
    index: int32_t = this.listOfList!.length -1;index >= 0; index--)
        {
this.listOfList[index]= new BasicArrayListD();
    
}





                        for (
    index: int32_t = this.availableListOfList!.length -1;index >= 0; index--)
        {
this.availableListOfList[index]= new BasicArrayListD();
    
}

}


    Image getImage(any = {} resourceId){

    imageCanBeNull: any = this.hashtable.get(resourceId);;
    

                        if(imageCanBeNull == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage.NULL_IMAGE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return imageCanBeNull as Image;
    
}


    public releaseAll(){




                        for (
    index: int32_t = this.listOfList!.length -1;index >= 0; index--)
        {
this.availableListOfList[index]!.clear();
    
this.availableListOfList[index]!.addAllList(this.listOfList[index]!);
    
}

this.logUtil!.putF(new StringMaker().append("ImageCache: ")!.append(this.toString())!.toString(), this, "releaseAll");
    
}


    int32_t getIndexWH(int32_t width, int32_t height){

    foundIndex: int32_t =  -1;;
    

    size: int32_t = this.widths.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(this.widths[index] == width && this.heights[index] == height)
                        
                                    {
                                    foundIndex= index;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return foundIndex;
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return foundIndex;
    
}


    Image getFromAvailable(int32_t foundIndex, int32_t width, int32_t height){

                        if(foundIndex !=  -1)
                        
                                    {
                                    
                        if(this.availableListOfList[foundIndex]!.size() > 0)
                        
                                    {
                                    
    list: BasicArrayList = this.availableListOfList[foundIndex]!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list.removeAt(list.size() -1) as Image;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage.NULL_IMAGE;
    
}


                //@Throws(Exception.constructor)
            
    public Image get(string caller, int32_t width, int32_t height){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    public Image getWithKey(any = {} key){



                            throw new RuntimeException();
                    
}


                //@Throws(Exception.constructor)
            
    Image createImage(string caller, int32_t width, int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.imageFactory!.createImage(caller, width, height);;
    
}


                //@Throws(Exception.constructor)
            
    Image createImageFromInputStream(any = {} key, InputStream inputStream){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.imageFactory!.createImageFromInputStream(key, inputStream);;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    index: int32_t = this.nextIndex -1;index >= 0; index--)
        {

    width: int32_t = this.widths[index]!;;
    

    height: int32_t = this.heights[index]!;;
    

    total: int32_t = this.listOfList[index]!.size()!;;
    

    totalAvailable: int32_t = this.availableListOfList[index]!.size()!;;
    
stringBuffer!.append(" w: ");
    
stringBuffer!.appendint(width);
    
stringBuffer!.append(" h: ");
    
stringBuffer!.appendint(height);
    
stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    
stringBuffer!.append(CommonLabels.getInstance()!.TOTAL_LABEL);
    
stringBuffer!.appendint(total);
    
stringBuffer!.append(" available: ");
    
stringBuffer!.appendint(totalAvailable);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public Hashtable<any, any> getHashtableP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable;
    
}


    public init(Image image){
}


    public initProgress(){
}


};

            

