
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/media/MediaUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/awt/image/BufferedImage.h>

      
#include <java/awt/image/RenderedImage.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/media/image/ImageUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/media/ImageIOUtil.h"
#include "org/allbinary/logic/visual/media/MediaData.h"
//import com.sun.imageio.plugins.common.ImageUtil;
auto MediaUtil::instance_owner() -> MediaUtil* { static std::unique_ptr<MediaUtil> value(new MediaUtil()); return value.get(); }
MediaUtil* MediaUtil::instance = MediaUtil::instance_owner();

    auto MediaUtil::getInstance() -> MediaUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MediaUtil::instance;
    
}


MediaUtil::MediaUtil() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto MediaUtil::saveImageFile(AbFile* originalImageFile, std::string newImageFileName, std::string category, MediaData* mediaData, int32_t newWidth, int32_t newHeight) -> void{

                        if(originalImageFile == 
                                    nullptr
                                 || !originalImageFile->isFile())
                        
                                    {
                                    


                            throw Exception("Original Image File Does Not Exist.");
                    

                                    }
                                

    BufferedImage* bufferedImage = ImageIOUtil::read(originalImageFile);;
    

                        if(bufferedImage == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Unable to find ImageReader for this file.");
                    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    HashMap<Object*, Object*>* hashMap = this->getImageBufferPropertyHashMap(bufferedImage);;
    
this->logUtil->putF(JavaString::valueOf("Image Properties: ") +JavaString::valueOf(hashMap->toString()), this, "saveImageFile()");
    

                                    }
                                

    AbFile* imageFile = AbFile::createAbFile(JavaString::valueOf(category) +JavaString::valueOf(newImageFileName));;
    
imageFile->createNewFile();
    

    ImageUtil* imageUtil = ImageUtil::getInstance();;
    

    BufferedImage* newBufferedImage = imageUtil->createBufferedImageForSave(bufferedImage, newWidth, newHeight);;
    

    bool isWritten = ImageIOUtil::write(dynamic_cast<RenderedImage*>(newBufferedImage), mediaData->getName(), imageFile);;
    

                        if(!isWritten)
                        
                                    {
                                    


                            throw Exception("Unable to write.");
                    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->VIEW))
                        
                                    {
                                    
    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Get Path: ");
    
stringBuffer->append(originalImageFile->getPath());
    
stringBuffer->append("\nNewImageFileName: ");
    
stringBuffer->append(newImageFileName);
    
stringBuffer->append("\nCategory: ");
    
stringBuffer->append(category);
    
stringBuffer->append("\nSave File Type: ");
    
stringBuffer->append(mediaData->getName());
    
stringBuffer->append("\nNew")->append(commonLabels->WIDTH_LABEL);
    
stringBuffer->appendint(newWidth);
    
stringBuffer->append("\nNew")->append(commonLabels->HEIGHT_LABEL);
    
stringBuffer->appendint(newHeight);
    
stringBuffer->append("\nFile Length: ");
    
stringBuffer->appendlong(originalImageFile->length());
    
stringBuffer->append("\nNew File Length: ");
    
stringBuffer->appendlong(imageFile->length());
    
this->logUtil->putF(stringBuffer->toString(), this, "saveImageFile()");
    

                                    }
                                
}


    auto MediaUtil::getImageBufferPropertyHashMap(BufferedImage* bufferedImage) -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::vector<std::string> propertyStringArray = bufferedImage->getPropertyNames();;
    

                        if(!propertyStringArray.empty())
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < propertyStringArray.size(); index++)
        {

    Object* propertyObject = bufferedImage->getProperty(propertyStringArray[index]);;
    
hashMap->put(propertyStringArray[index], propertyObject->toString());
    
}


                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_MEDIA_MEDIAUTIL_CPP
