#include <iostream>

int main()
{
  bool end{false};

  char name[15]{};

  std::cout << "What's your name dear: ";
  std::cin.getline(name, 15);

  std::cout << std::endl;

  const char *prediction[10]{
      "A lot of kinds running in the backyard!",
      "A lot of empty beer bootles on your work table.",
      "Your partying too much with kids wearing weird clothes.",
      "You running away form something really scary.",
      "Clouds gathering in the sky and army standing ready for war.",
      "Dogs running around in a deserted empty city.",
      "A lot of cars stuck in a terrible traffic jam.",
      "You sitting in the dark typing lots of lines of code on your dirty computer.",
      "You yelling at your boss and oh no!! You get fired!",
      "You lauging your lungs out. I've never seen this before."};

  while (!end)
  {
    std::cout << "Oh dear " << name << ", I see...";
    std::cout << std::endl;

    size_t random_number = static_cast<size_t>(std::rand() % 11);
    (random_number) ? std::cout << prediction[random_number] : std::cout << ", humm i don't see anyting!";

    std::cout << std::endl;

    std::cout << "Do you want me to try again ? (Y | N): ";
    char go_on;
    std::cin >> go_on;

    end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
  }

  std::cout << "That's all I have for you today dear. Best wishes" << std::endl;

  return 0;
}