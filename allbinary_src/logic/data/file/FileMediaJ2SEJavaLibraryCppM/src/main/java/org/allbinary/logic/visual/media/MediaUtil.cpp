
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageIOUtil.h"
#include "MediaData.h"
//import com.sun.imageio.plugins.common.ImageUtil;
class MediaUtil
            : public Object
         {
        

    private: static const instance: MediaUtil = new MediaUtil();

    public static MediaUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaUtil.instance;
    
}


    static HashMap<any, any> getImageBufferPropertyHashMap(BufferedImage bufferedImage){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    propertyStringArray: std::vector<string> = bufferedImage!.getPropertyNames()!;;
    

                        if(propertyStringArray != 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < propertyStringArray!.length; index++)
        {

    propertyObject: any = bufferedImage!.getProperty(propertyStringArray[index]!)!;;
    
hashMap!.put(propertyStringArray[index]!, propertyObject!.toString());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

private constructor (){

            super();
        }


                //@Throws(Exception.constructor)
            
    public saveImageFile(AbFile originalImageFile, string newImageFileName, string category, MediaData mediaData, int32_t newWidth, int32_t newHeight){

                        if(originalImageFile == 
                                    null
                                 || !originalImageFile!.isFile())
                        
                                    {
                                    


                            throw new Exception("Original Image File Does Not Exist.");
                    

                                    }
                                

    bufferedImage: BufferedImage = ImageIOUtil.read(originalImageFile)!;;
    

                        if(bufferedImage == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("Unable to find ImageReader for this file.");
                    

                                    }
                                

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    hashMap: HashMap<any, any> = this.getImageBufferPropertyHashMap(bufferedImage)!;;
    
this.logUtil!.putF("Image Properties: " +hashMap!.toString(), this, "saveImageFile()");
    

                                    }
                                

    imageFile: AbFile = AbFile.createAbFile(category +newImageFileName)!;;
    
imageFile!.createNewFile();
    

    imageUtil: ImageUtil = ImageUtil.getInstance()!;;
    

    newBufferedImage: BufferedImage = imageUtil!.createBufferedImageForSave(bufferedImage, newWidth, newHeight)!;;
    

    isWritten: bool = ImageIOUtil.write(newBufferedImage as RenderedImage, mediaData!.getName(), imageFile)!;;
    

                        if(!isWritten)
                        
                                    {
                                    


                            throw new Exception("Unable to write.");
                    

                                    }
                                

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.VIEW))
                        
                                    {
                                    
    commonLabels: CommonLabels = CommonLabels.getInstance()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Get Path: ");
    
stringBuffer!.append(originalImageFile!.getPath());
    
stringBuffer!.append("\nNewImageFileName: ");
    
stringBuffer!.append(newImageFileName);
    
stringBuffer!.append("\nCategory: ");
    
stringBuffer!.append(category);
    
stringBuffer!.append("\nSave File Type: ");
    
stringBuffer!.append(mediaData!.getName());
    
stringBuffer!.append("\nNew")!.append(commonLabels!.WIDTH_LABEL);
    
stringBuffer!.appendint(newWidth);
    
stringBuffer!.append("\nNew")!.append(commonLabels!.HEIGHT_LABEL);
    
stringBuffer!.appendint(newHeight);
    
stringBuffer!.append("\nFile Length: ");
    
stringBuffer!.appendlong(originalImageFile!.length());
    
stringBuffer!.append("\nNew File Length: ");
    
stringBuffer!.appendlong(imageFile!.length());
    
this.logUtil!.putF(stringBuffer!.toString(), this, "saveImageFile()");
    

                                    }
                                
}


};

            

