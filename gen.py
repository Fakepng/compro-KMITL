import os
import sys

def main():
  chapterNo = int(input("Chapter: "))
  chapter = "Chapter " + str(chapterNo)

  folder = os.listdir(os.path.join(os.getcwd(), chapter))

  sources = [file for file in folder if file.endswith(".c")]

  readmeContents = ""

  chapterTitle = input("Chapter Title: ")

  item1Title = input("Item 1 Title: ")
  item1Question = multilineInput("Item 1 Question: ")
  item1Testcase = testcaseInput("Item 1 Testcase: ")
  item1Link = itemLink(chapterNo, item1Title, 1)
  item1Content = open(os.path.join(os.getcwd(), chapter, sources[0]), "r")
  item1Code = "".join(item1Content.readlines())

  item2Title = input("Item 2 Title: ")
  item2Question = multilineInput("Item 2 Question: ")
  item2Testcase = testcaseInput("Item 2 Testcase: ")
  item2Link = itemLink(chapterNo, item2Title, 2)
  item2Content = open(os.path.join(os.getcwd(), chapter, sources[1]), "r")
  item2Code = "".join(item2Content.readlines())

  item3Title = input("Item 3 Title: ")
  item3Question = multilineInput("Item 3 Question: ")
  item3Testcase = testcaseInput("Item 3 Testcase: ")
  item3Link = itemLink(chapterNo, item3Title, 3)
  item3Content = open(os.path.join(os.getcwd(), chapter, sources[2]), "r")
  item3Code = "".join(item3Content.readlines())

  item4Title = input("Item 4 Title: ")
  item4Question = multilineInput("Item 4 Question: ")
  item4Testcase = testcaseInput("Item 4 Testcase: ")
  item4Link = itemLink(chapterNo, item4Title, 4)
  item4Content = open(os.path.join(os.getcwd(), chapter, sources[3]), "r")
  item4Code = "".join(item4Content.readlines())

  item5Title = input("Item 5 Title: ")
  item5Question = multilineInput("Item 5 Question: ")
  item5Testcase = testcaseInput("Item 5 Testcase: ")
  item5Link = itemLink(chapterNo, item5Title, 5)
  item5Content = open(os.path.join(os.getcwd(), chapter, sources[4]), "r")
  item5Code = "".join(item5Content.readlines())

  readmeContents += "# " + chapter + ": " + chapterTitle + "\n\n"

  readmeContents += "[Back](../README.md)\n\n"

  readmeContents += "## Table of Contents\n\n"

  readmeContents += "- [" + item1Title + "](" + item1Link + ")\n"
  readmeContents += "- [" + item2Title + "](" + item2Link + ")\n"
  readmeContents += "- [" + item3Title + "](" + item3Link + ")\n"
  readmeContents += "- [" + item4Title + "](" + item4Link + ")\n"
  readmeContents += "- [" + item5Title + "](" + item5Link + ")\n\n"

  readmeContents += "## " + str(chapterNo) + ".1 " + item1Title + "\n\n"

  readmeContents += "Question:\n\n"

  readmeContents += "```c\n" + item1Question + "```\n\n"

  readmeContents += "Output:\n\n"

  readmeContents += item1Testcase

  readmeContents += "Answer:\n"
  readmeContents += "[View](/Chapter%20" + str(chapterNo) + "/" + sources[0] + ")\n\n"

  readmeContents += "```c\n" + item1Code + "\n```\n\n"

  readmeContents += "## " + str(chapterNo) + ".2 " + item2Title + "\n\n"

  readmeContents += "Question:\n\n"

  readmeContents += "```c\n" + item2Question + "```\n\n"

  readmeContents += "Output:\n\n"

  readmeContents += item2Testcase

  readmeContents += "Answer:\n"
  readmeContents += "[View](/Chapter%20" + str(chapterNo) + "/" + sources[1] + ")\n\n"

  readmeContents += "```c\n" + item2Code + "\n```\n\n"

  readmeContents += "## " + str(chapterNo) + ".3 " + item3Title + "\n\n"

  readmeContents += "Question:\n\n"

  readmeContents += "```c\n" + item3Question + "```\n\n"

  readmeContents += "Output:\n\n"

  readmeContents += item3Testcase

  readmeContents += "Answer:\n"
  readmeContents += "[View](/Chapter%20" + str(chapterNo) + "/" + sources[2] + ")\n\n"

  readmeContents += "```c\n" + item3Code + "\n```\n\n"

  readmeContents += "## " + str(chapterNo) + ".4 " + item4Title + "\n\n"

  readmeContents += "Question:\n\n"

  readmeContents += "```c\n" + item4Question + "```\n\n"

  readmeContents += "Output:\n\n"

  readmeContents += item4Testcase

  readmeContents += "Answer:\n"
  readmeContents += "[View](/Chapter%20" + str(chapterNo) + "/" + sources[3] + ")\n\n"

  readmeContents += "```c\n" + item4Code + "\n```\n\n"

  readmeContents += "## " + str(chapterNo) + ".5 " + item5Title + "\n\n"

  readmeContents += "Question:\n\n"

  readmeContents += "```c\n" + item5Question + "```\n\n"

  readmeContents += "Output:\n\n"

  readmeContents += item5Testcase

  readmeContents += "Answer:\n"
  readmeContents += "[View](/Chapter%20" + str(chapterNo) + "/" + sources[4] + ")\n\n"

  readmeContents += "```c\n" + item5Code + "\n```\n\n"

  readmeContents += "[Top](#chapter-" + str(chapterNo) + "-" + chapterTitle.replace(" ", "-").replace("(", "").replace(")", "").replace(":", "").replace("?", "").replace(",", "").replace("'", "").replace(".", "").replace("!", "").lower() + ")\n"

  readme = open(os.path.join(os.getcwd(), chapter, "README.md"), "w", encoding='utf-8')
  readme.write(readmeContents)
  readme.close()

  print("Done")
  tableOfContents = ""
  
  tableOfContents += "### Chapter " + str(chapterNo) + ": " + chapterTitle + " [View](/Chapter%20" + str(chapterNo) + "/README.md)\n\n"
  
  tableOfContents += "- [x] ข้อ 1 [" + item1Title + "](/Chapter%20" + str(chapterNo) + "/README.md" + item1Link + ")\n" 
  tableOfContents += "- [x] ข้อ 2 [" + item2Title + "](/Chapter%20" + str(chapterNo) + "/README.md" + item2Link + ")\n" 
  tableOfContents += "- [x] ข้อ 3 [" + item3Title + "](/Chapter%20" + str(chapterNo) + "/README.md" + item3Link + ")\n" 
  tableOfContents += "- [x] ข้อ 4 [" + item4Title + "](/Chapter%20" + str(chapterNo) + "/README.md" + item4Link + ")\n" 
  tableOfContents += "- [x] ข้อ 5 [" + item5Title + "](/Chapter%20" + str(chapterNo) + "/README.md" + item5Link + ")\n" 

  print(tableOfContents)

def multilineInput(prompt):
  print("\n" + prompt)
  print("Press CTRL + D (Unix) or CTRL + Z (Windows) to exit")
  lines = sys.stdin.readlines()
  return ''.join(lines)
    
def testcaseInput(prompt):
  print("\n" + prompt)
  testcases = ""
  testcaseNo = 1
  while True:
    testcase = multilineInput("Testcase: " + str(testcaseNo))
    if testcase == "":
      break
    testcases += "Testcase: " + str(testcaseNo) + "\n\n"
    testcases += "```\n" + testcase + "```\n\n"
    testcaseNo += 1
  
  return testcases

def itemLink(chapterNo, title, itemNo):
  return "#" + str(chapterNo) + str(itemNo) + "-" + title.replace(" ", "-").replace("(", "").replace(")", "").replace(":", "").replace("?", "").replace(",", "").replace("'", "").replace(".", "").replace("!", "").lower()

if __name__ == "__main__":
  main()