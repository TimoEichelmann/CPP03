const fs = require('fs');
const path = require('path');

// Get the class name from command line arguments
const className = process.argv[2];
if (!className) {
  console.error("Please provide a class name as an argument.");
  process.exit(1);
}

// Define the C++ class template in orthodox canonical form
const classTemplate = `#ifndef ${className.toUpperCase()}_H
#define ${className.toUpperCase()}_H

class ${className} {
public:
    ${className}();

    ${className}(const ${className}& other);

    ${className}& operator=(const ${className}& other);

	~${cclassName}();
private:

};

#endif // ${className.toUpperCase()}_H
`;

// Define the file name and write the template to a new file
const fileName = `${className}.h`;
const filePath = path.join(__dirname, fileName);

fs.writeFile(filePath, classTemplate, (err) => {
  if (err) {
    console.error("Error writing file:", err);
    process.exit(1);
  }
  console.log(`C++ class ${className} generated in ${fileName}`);
});