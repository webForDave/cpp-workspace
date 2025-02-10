"""
===================================PYTHON VERSION==========================================
Character check - checks weather a character is a vowel or a consonant
This program takes one chracter from a user,
 and prints to the console what sound it is either Vowel or Consonant
"""

def main():
    vowels = ['a', 'e', 'i', 'o', 'u']
    
    if get_char().lower() in vowels: # converts user char into lowercase and check if in vowels list
        return "Vowel"
    return "Consonant"


def get_char(): # prompts user for character and validates it
    while True:
        try:
            user_char = input("Enter a character - must be a single character: ").strip()
            if len(user_char) > 1: # validates user input to be a single character
                print("You need to enter a single character")
                continue
            return user_char
        except Exception:
            continue


if __name__ == '__main__':
    print(main())