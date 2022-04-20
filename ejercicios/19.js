function main(dinero) {
  console.log(`dinero: ${dinero}`)
  console.log(`1000: ${dinero \ 1000}`);
  dinero = dinero % 1000;
  console.log(`500: ${dinero \ 500}`);
dinero = dinero % 500;
  console.log(`200: ${dinero \ 200}`);
  dinero = dinero % 200;
  console.log(`100: ${dinero \ 100}`);
  dinero = dinero % 100;
  console.log(`50: ${dinero \ 50}`);
  dinero = dinero % 50;
  console.log(`20: ${dinero \ 20}`);
  dinero = dinero % 20;
  console.log(`10: ${dinero \ 10}`);
  dinero = dinero % 10;
}
